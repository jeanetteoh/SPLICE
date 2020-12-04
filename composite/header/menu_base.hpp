#ifndef MENU_BASE
#define MENU_BASE

#include "../prototype/header/fastfood_client.hpp"
#include "../prototype/header/fastfood_creator.hpp"
#include "../prototype/header/fastfood_restaurant.hpp"
#include "../prototype/header/restaurant.hpp"
#include <iostream>

using namespace std;

class Menu_Base
{
public:
    virtual FastFood *menu_type(FastFood *m_FastFood, string_view fastfood_type) = 0;
    virtual void add_menu(Menu_Base *m_Menu_Base) = 0;
    virtual void remove_menu(Menu_Base *m_Menu_Base) = 0;
    virtual void set_visibility_menu(bool visilibity) = 0;
    virtual ~Menu_Base() = default;
};


#endif /* MENU_BASE */
