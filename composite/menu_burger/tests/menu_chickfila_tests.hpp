#ifndef MENU_CHICKFILA_TESTS
#define MENU_CHICKFILA_TESTS
#include "gtest/gtest.h"
#include "../../composite/menu_component.hpp"
#include "../../composite/menu_burger/header/menu_items_chickfila.hpp"
#include "../../composite/menu_burger/header/menu_chickfila.hpp"
#include <iostream>

using namespace std;

TEST(MenuTest, ChickFilA_CustomerFavorites)
{
    menu_component *m_chickfila_customer_favorites = new menu_chickfila("Customer Favorites", "Following Options are the Most Popular Items at Chick-Fil-A");

    EXPECT_EQ(m_chickfila_customer_favorites->get_name(), "Customer Favorites");
    EXPECT_EQ(m_chickfila_customer_favorites->get_description(), "Following Options are the Most Popular Items at Chick-Fil-A");

    menu_component *original_chicken_sandwich = new menu_items_chickfila(1, "Chick-fil-A® Chicken Sandwich", "A boneless breast of chicken seasoned to perfection, hand-breaded, pressure cooked in 100% refined peanut oil and served on a toasted, buttered bun with dill pickle chips.", 3.75);
    m_chickfila_customer_favorites->add(original_chicken_sandwich);
    cout << "EXPECTED ITEM NUMBER: 1"
         << "\nRECEIVIED: " << original_chicken_sandwich->get_item_number() << endl;
    EXPECT_EQ(original_chicken_sandwich->get_item_number(), 1);

    menu_component *original_deluxe_sandwich = new menu_items_chickfila(2, "Chick-fil-A® Chicken Sandwich", "A boneless breast of chicken seasoned to perfection, hand-breaded, pressure cooked in 100% refined peanut oil and served on a toasted, buttered bun with dill pickle chips, Green Leaf lettuce, tomato and American cheese. ", 4.45);
    m_chickfila_customer_favorites->add(original_deluxe_sandwich);
    cout << "EXPECTED ITEM NUMBER: 2"
         << "\nRECEIVIED: " << original_deluxe_sandwich->get_item_number() << endl;
    EXPECT_EQ(original_deluxe_sandwich->get_item_number(), 2);

    m_chickfila_customer_favorites->print();
}

#endif /* MENU_CHICKFILA_TESTS */
