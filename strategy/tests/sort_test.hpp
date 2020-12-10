#ifndef SORT_TESTS
#define SORT_TESTS
#include "gtest/gtest.h"
#include "../strategy/header/sort.hpp"
#include "../strategy/header/name_sort.hpp"
#include "../strategy/header/price_sort.hpp"
#include "../strategy/header/rest.hpp"



TEST(Sort_Tests, NameSortTest)
{

    vector<Rest*> n_Test;
    n_Test.push_back(new Pizza("Domino"));
    n_Test.push_back(new Taco("Taco"));
    n_Test.push_back(new Burger("McDonald"));


    name_sort test = new name_sort();
    vector<string*> save = test->sort(n_Test);

    EXPECT_EQ(save.at(0), "Domino");
    EXPECT_EQ(save.at(1), "McDonald");
    EXPECT_EQ(save.at(2), "Taco");

}
