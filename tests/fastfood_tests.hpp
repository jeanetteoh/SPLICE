#ifndef FASTFOOD_TESTS
#define FASTFOOD_TESTS
#include "gtest/gtest.h"
#include "../header/fastfood_factory.hpp"
#include "../header/fastfood_restaurant.hpp"
#include "../header/mcdonalds_fastfood.hpp"
#include "../header/tacobell_fastfood.hpp"
#include "../header/chickfila_fastfood.hpp"

TEST(FastFood_Tests, SizeTest)
{
    vector<FastFood *> m_sizeTest;
    m_sizeTest.push_back(new McDonalds("McDonald's"));
    m_sizeTest.push_back(new TacoBell("Taco Bell"));
    m_sizeTest.push_back(new ChickFilA("Chick-Fil-A"));
    ASSERT_EQ(m_sizeTest.size(), 3);
}

TEST(FastFood_Tests, StringTest)
{
    vector<FastFood *> m_stringTest;
    m_stringTest.push_back(new McDonalds("McDonald's"));
    m_stringTest.push_back(new TacoBell("Taco Bell"));
    m_stringTest.push_back(new ChickFilA("Chick-Fil-A"));
    for (auto FastFood : m_stringTest)
    {
        EXPECT_EQ(m_stringTest.at(0)->get_fastfood_store_name(), "McDonald's");
        EXPECT_EQ(m_stringTest.at(1)->get_fastfood_store_name(), "Taco Bell");
        EXPECT_EQ(m_stringTest.at(2)->get_fastfood_store_name(), "Chick-Fil-A");
    }
}

#endif /* FASTFOOD_TESTS */
