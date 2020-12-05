#ifndef MENU_COMPONENT
#define MENU_COMPONENT

#include "../prototype/header/fastfood_client.hpp"
#include "../prototype/header/fastfood_creator.hpp"
#include "../prototype/header/fastfood_restaurant.hpp"
#include "../prototype/header/restaurant.hpp"
#include <iostream>

using namespace std;
class menu_component
{
public:
    virtual void add(menu_component *menu_component){}
    virtual void remove(menu_component *menu_component){}
    virtual string get_name() = 0;
    virtual string get_description() = 0;
    virtual void print() = 0;
};

#endif /* MENU_COMPONENT */
