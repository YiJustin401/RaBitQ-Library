#include <gtest/gtest.h>

#include <rabitqlib/quantization/rabitq_impl.hpp>


void test_best_rescale_factor(size_t dim, size_t ex_bits) {
    double t_const = rabitqlib::quant::rabitq_impl::ex_bits::get_const_scaling_factors(dim, ex_bits);
    EXPECT_TRUE(t_const > 0);
}

TEST(RabitqImpl, BestRescaleFactor) {
    test_best_rescale_factor(960, 1);
    test_best_rescale_factor(960, 2);
    test_best_rescale_factor(960, 3);
    test_best_rescale_factor(960, 4);
    test_best_rescale_factor(960, 5);
    test_best_rescale_factor(960, 6);
    test_best_rescale_factor(960, 7);
    test_best_rescale_factor(960, 8);
}