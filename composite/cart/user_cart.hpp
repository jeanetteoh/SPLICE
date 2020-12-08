#ifndef USER_CART
#define USER_CART
// #include "../../cart_component.hpp"
#include "/Users/xinwng/Documents/GitHub/final-project-joh046-hzhan265-xwang315/composite/cart_component.hpp"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class user_cart : public cart_component
{
private:
    party_component *pc;
    menu_component *mc;
    vector<cart_component*> v_carts;
    string user_cart_name;
    vector<menu_component*> v_items;
public:
    user_cart(party_component* pc) : cart_component()
    {
        this->pc = pc;
        this->user_cart_name = pc->get_name();
        
    }

    void add(cart_component *cc)
    {
        v_carts.push_back(cc);
    }

    void add_to_cart(menu_component *mc)
    {

    }

    string get_name()
    {
        return this->user_cart_name;
    }

    void display()
    {
        cout << this->user_cart_name << "'s Cart" << endl;
        cout << "---------------------------------" << endl;
        for(auto a_cart : v_carts)
        {
            a_cart->display();
        }
    }
};

#endif /* USER_CART */
