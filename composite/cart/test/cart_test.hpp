#ifndef CART_TEST
#define CART_TEST
#include "gtest/gtest.h"
#include "../../menu_burger/header/menu_mcdonalds.hpp"
#include "../../menu_burger/header/menu_items_mcdonalds.hpp"
#include "../../party/party.hpp"
#include "../../party/user.hpp"
#include "/Users/xinwng/Documents/GitHub/final-project-joh046-hzhan265-xwang315/composite/cart_component.hpp"
#include "../user_cart.hpp"
#include "../cart_items.hpp"

TEST(Cart_Test, Test1)
{
    party_component *c_p = new party("Party1", 2);
    party_component *c_user_xin = new user("Xin");
    party_component *c_user_jeanette = new user("Jeanette");

    c_p->add(c_user_xin);
    c_p->add(c_user_jeanette);

    menu_component *c_mcdonalds_test = new menu_mcdonalds("McDonalds Test", "\nDescription Test");
    menu_component *big_mac = new menu_items_mcdonalds(1, "Test 1", "Description Test 1", 3.99);
    c_mcdonalds_test->add(big_mac);
    menu_component *test_2 = new menu_items_mcdonalds(2, "Test 2", "Description Test 2", 4.00);

    cart_component *c_user_xin_cart = new user_cart(c_user_xin);
    cart_component *xin_cart_items = new cart_items(big_mac);
    xin_cart_items->add_to_cart(test_2);
    c_user_xin_cart->add(xin_cart_items);
    c_user_xin_cart->display();
}

#endif /* CART_TEST */
