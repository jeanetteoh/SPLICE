#include "../header/mcdonalds_fastfood.hpp"

void McDonalds::fastfood_display_store_info()
{
    cout << "Restaurant Name: " << get_fastfood_store_name() << "\n"
         << "Restaurant Category: " << get_fastfood_restaurant_category() << endl << endl;
}