#ifndef CART_ITEMS
#define CART_ITEMS
// #include "../../cart_component.hpp"
#include "/Users/xinwng/Documents/GitHub/final-project-joh046-hzhan265-xwang315/composite/cart_component.hpp"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class cart_items : public cart_component
{
private:
    vector<menu_component *> v_mc;

public:
    cart_items(menu_component *mc) : cart_component()
    {
        v_mc.push_back(mc);
    }

    string get_name()
    {
        return "Unable to retreieve name";
    }

    void add(cart_component *cc)
    {

    }

    void add_to_cart(menu_component *mc)
    {
        v_mc.push_back(mc);
    }

    void display()
    {
        unsigned i = 0;
        while (!v_mc.empty())
        {
            // cout << "Item #: " << v_mc.at(i)->get_item_number() << endl
            //     << "Item Name: " << v_mc.at(i)->get_name() << endl
            //     << "Item Price: " << v_mc.at(i)->get_item_price() << endl;
            for (auto a_v_mc : v_mc)
            {
                a_v_mc->print();
            }
            break;
        }
        ++i;
    }
};

#endif /* CART_ITEMS */
