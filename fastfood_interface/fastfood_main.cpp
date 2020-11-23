#include "../header/fastfood_client.hpp"
#include "../header/fastfood_creator.hpp"
#include "../header/fastfood_restaurant.hpp"
#include "../header/fastfood_category_burger.hpp"
#include "../header/fastfood_category_taco.hpp"
#include "../header/fastfood_category_pizza.hpp"
#include "../fastfood_interface/fastfood_display.hpp"
#include <iostream>
using namespace std;

int main()
{
    FastFood_Display test1;
    test1.display_restaurant_prototype();

    // cout << "Burger Places" << endl;
    // cout << "------------------------" << endl;
    // FastFood_Client BurgerPlaces;
    // BurgerPlaces.fastfood_burger_run();
    // cout << endl << endl;
    
    // cout << "Taco Places" << endl;
    // cout << "------------------------" << endl;
    // FastFood_Client TacoPlaces;
    // TacoPlaces.fastfood_taco_run();
    return 0;
}
