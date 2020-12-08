#ifndef MENU_DELTACO_TESTS
#define MENU_DELTACO_TESTS
#include "gtest/gtest.h"
#include "../../composite/menu_component.hpp"
#include "../../composite/menu_taco/header/menu_items_deltaco.hpp"
#include "../../composite/menu_taco/header/menu_deltaco.hpp"
#include <iostream>

using namespace std;

TEST(MenuTest, DelTaco_CustomerFavorites)
{
    menu_component *m_deltaco_customer_favorites = new menu_deltaco("Customer Favorites", "Following Options are the Most Popular Items at Del Taco");

    EXPECT_EQ(m_deltaco_customer_favorites->get_name(), "Customer Favorites");
    EXPECT_EQ(m_deltaco_customer_favorites->get_description(), "Following Options are the Most Popular Items at Del Taco");

    menu_component *beer_battered_fish_taco = new menu_items_deltaco(1, "Beer Battered Fish Taco", "Wild Caught Alaska Pollock fillet in a crispy beer batter, topped with crunchy cabbage, savory secret sauce, and pico de gallo, wrapped in two warm corn tortillas and served with a fresh-cut lime wedge.", 2.29);
    m_deltaco_customer_favorites->add(beer_battered_fish_taco);
    cout << "EXPECTED ITEM NUMBER: 1"
         << "\nRECEIVIED: " << beer_battered_fish_taco->get_item_number() << endl;
    EXPECT_EQ(beer_battered_fish_taco->get_item_number(), 1);

    m_deltaco_customer_favorites->print();
}

#endif /* MENU_DELTACO_TESTS */
