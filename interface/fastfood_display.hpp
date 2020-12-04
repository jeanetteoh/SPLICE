#ifndef FASTFOOD_DISPLAY
#define FASTFOOD_DISPLAY
#include <iostream>

#include "../prototype/header/fastfood_client.hpp"
#include "../prototype/header/fastfood_creator.hpp"
#include "../prototype/header/fastfood_restaurant.hpp"
#include "../prototype/header/fastfood_category_burger.hpp"
#include "../prototype/header/fastfood_category_taco.hpp"
#include "../prototype/header/fastfood_category_pizza.hpp"

using namespace std;
class FastFood_Display
{
public:
    void display_interface();
    void display_burger_places();
    void display_taco_places();
    void display_pizza_places();
};



#endif /* FASTFOOD_DISPLAY */
