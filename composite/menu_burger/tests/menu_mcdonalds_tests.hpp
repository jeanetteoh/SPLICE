#ifndef MENU_MCDONALDS_TEST
#define MENU_MCDONALDS_TEST
#include "gtest/gtest.h"
#include "../../composite/menu_component.hpp"
#include "../../composite/menu_burger/header/menu_items_mcdonalds.hpp"
#include "../../composite/menu_burger/header/menu_mcdonalds.hpp"
#include <iostream>

using namespace std;

TEST(MenuTest, McDonalds_CustomerFavorites)
{
    menu_component *m_mcdonalds_customer_favorites = new menu_mcdonalds("Customer Favorites", "Following Options are the Most Popular Items at McDonald's");
    
    EXPECT_EQ(m_mcdonalds_customer_favorites->get_name(), "Customer Favorites");
    EXPECT_EQ(m_mcdonalds_customer_favorites->get_description(), "Following Options are the Most Popular Items at McDonald's");

    menu_component *big_mac = new menu_items_mcdonalds("Big Mac", "Mouthwatering perfection starts with two 100% pure beef patties and Big Mac sauce sandwiched between a sesame seed bun. It’s topped off with pickles, crisp shredded lettuce, finely chopped onion and American cheese.", 3.99); 
    m_mcdonalds_customer_favorites->add(big_mac);

    menu_component *mcnuggets_4_piece = new menu_items_mcdonalds("4 Piece Chicken McNuggets", "Our tender, juicy Chicken McNuggets® are made with 100% white meat chicken and no artificial colors, flavors or preservatives.Pair them with your favorite dipping sauces when you Mobile Order & Pay!", 1.99);
    m_mcdonalds_customer_favorites->add(mcnuggets_4_piece);

    m_mcdonalds_customer_favorites->print();
}

#endif /* MENU_MCDONALDS_TEST */
