#ifndef _SORT_TESTS_
#define _SORT_TESTS_
#include "gtest/gtest.h"
#include "../header/sort.hpp"
#include "../header/name_sort.hpp"
#include "../header/price_sort.hpp"
#include "../header/rest.hpp"



TEST(Sort_Tests, NameSortTest)
{

    vector<Rest*> name_Test;
    name_Test.push_back(new Rest("Domino"));
    name_Test.push_back(new Rest("Taco"));
    name_Test.push_back(new Rest("McDonald"));

    //nameSort* test ;
    nameSort* test = new nameSort();
    vector<string> save = test->ssort(name_Test);

    EXPECT_EQ(save.at(0), "Domino");
    EXPECT_EQ(save.at(1), "McDonald");
    EXPECT_EQ(save.at(2), "Taco");

}

TEST(Sort_Tests, PriceSortTest)
{
    vector<Rest*> Price_Test;
    Price_Test.push_back(new Rest("234.4"));
    Price_Test.push_back(new Rest("34.5"));
    Price_Test.push_back(new Rest("45"));

    priceSort* test = new priceSort();
     //priceSort* test;
    //vector<string> save = test->ssort(Price_Test);
    vector<double> save = test->psort(Price_Test);
    EXPECT_EQ(save.at(0), 234);
    EXPECT_EQ(save.at(1), 45);
    EXPECT_EQ(save.at(2), 34.5);

}

#endif _SORT_TESTS_ 