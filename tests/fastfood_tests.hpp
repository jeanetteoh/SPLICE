#ifndef FASTFOOD_TESTS
#define FASTFOOD_TESTS
#include "gtest/gtest.h"
#include "../header/fastfood_factory.hpp"
#include "../header/fastfood_restaurant.hpp"
#include "../header/mcdonalds_fastfood.hpp"
#include "../header/tacobell_fastfood.hpp"

TEST(FastFood_Tests, Test1)
{
    vector<FastFood *> test;
    test.push_back(new McDonalds("McDonald's"));
    test.push_back(new TacoBell("TacoBell"));
    ASSERT_EQ(test.size(), 2);
    for(auto FastFood : test)
    {
        EXPECT_EQ(test.at(0)->get_fastfood_store_name(), "McDonald's");
        EXPECT_EQ(test.at(1)->get_fastfood_store_name(), "Taco Bell");
    }
}

#endif /* FASTFOOD_TESTS */
