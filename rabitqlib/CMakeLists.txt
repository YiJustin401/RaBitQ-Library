# message(STATUS "Building rabitqlib, cur_dir: ${CMAKE_CURRENT_SOURCE_DIR}")

# Header-only library as INTERFACE target
add_library(rabitq INTERFACE)

target_include_directories(rabitq INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})
target_include_directories(rabitq INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/third/simde)
target_include_directories(rabitq INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/third/Eigen)

# Ensure downstreams use C++17
target_compile_features(rabitq INTERFACE cxx_std_17)

# target_link_libraries(rabitq INTERFACE -lrt -march=native -fopenmp -ftree-vectorize -fexceptions -w)