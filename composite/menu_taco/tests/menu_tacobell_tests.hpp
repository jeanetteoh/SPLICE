#ifndef MENU_TACOBELL_TESTS
#define MENU_TACOBELL_TESTS
#include "gtest/gtest.h"
#include "../../composite/menu_component.hpp"
#include "../../composite/menu_taco/header/menu_items_tacobell.hpp"
#include "../../composite/menu_taco/header/menu_tacobell.hpp"
#include <iostream>

using namespace std;

TEST(MenuTest, TacoBell_CustomerFavorites)
{
    menu_component *m_tacobell_customer_favorites = new menu_tacobell("Customer Favorites", "Following Options are the Most Popular Items at Taco Bell");

    EXPECT_EQ(m_tacobell_customer_favorites->get_name(), "Customer Favorites");
    EXPECT_EQ(m_tacobell_customer_favorites->get_description(), "Following Options are the Most Popular Items at Taco Bell");

    menu_component *nachos_bellgrande = new menu_items_tacobell(1, "NACHOS BELLGRANDE®", "A portion of crispy tortilla chips topped with warm nacho cheese sauce, refried beans, seasoned beef, ripe tomatoes and cool reduced fat sour cream.", 3.69);
    m_tacobell_customer_favorites->add(nachos_bellgrande);
    cout << "EXPECTED ITEM NUMBER: 1"
         << "\nRECEIVIED: " << nachos_bellgrande->get_item_number() << endl;
    EXPECT_EQ(nachos_bellgrande->get_item_number(), 1);

    menu_component *cinnabon_delights_12 = new menu_items_tacobell(2, "CINNABON DELIGHTS® 12 PACK", "DESSERT, DISGUISED AS BREAKFAST, DISGUISED AS DESSERT", 4.99);
    m_tacobell_customer_favorites->add(cinnabon_delights_12);
    cout << "EXPECTED ITEM NUMBER: 2"
         << "\nRECEIVIED: " << cinnabon_delights_12->get_item_number() << endl;
    EXPECT_EQ(cinnabon_delights_12->get_item_number(), 2);

    m_tacobell_customer_favorites->print();
}

#endif /* MENU_TACOBELL_TESTS */
