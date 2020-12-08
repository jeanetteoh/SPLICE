#ifndef MENU_INNOUT_TESTS
#define MENU_INNOUT_TESTS
#include "gtest/gtest.h"
#include "../../composite/menu_component.hpp"
#include "../../composite/menu_burger/header/menu_items_innout.hpp"
#include "../../composite/menu_burger/header/menu_innout.hpp"
#include <iostream>

using namespace std;

TEST(MenuTest, InNOut_Customer_Favorites)
{
    menu_component *m_innout_customer_favorites = new menu_innout("Customer Favorites", "Following Options are the Most Popular Items at In-N-Out");

    EXPECT_EQ(m_innout_customer_favorites->get_name(), "Customer Favorites");
    EXPECT_EQ(m_innout_customer_favorites->get_description(), "Following Options are the Most Popular Items at In-N-Out");
    menu_component *double_double_burger = new menu_items_innout(1, "Double-Double Burger", "n/a", 3.45);

    m_innout_customer_favorites->add(double_double_burger);
    cout << "EXPECTED ITEM NUMBER: 1"
         << "\nRECEIVIED: " << double_double_burger->get_item_number() << endl;
    EXPECT_EQ(double_double_burger->get_item_number(), 1);

    menu_component *cheeseburger = new menu_items_innout(2, "Cheeseburger", "n/a", 2.40);
    m_innout_customer_favorites->add(cheeseburger);
    cout << "EXPECTED ITEM NUMBER: 2"
         << "\nRECEIVIED: " << cheeseburger->get_item_number() << endl;
    EXPECT_EQ(cheeseburger->get_item_number(), 2);

    m_innout_customer_favorites->print();
}

#endif /* MENU_INNOUT_TESTS */
