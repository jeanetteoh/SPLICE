#include "../header/fastfood_category_pizza.hpp"

void Pizza::fastfood_display_store_info()
{
    cout << "Restaurant Name: " << get_fastfood_store_name() << "\n"
         << "Restaurant Category: " << get_fastfood_restaurant_category() << endl << endl;
}

FastFoodPtr Pizza::clone()
{
    cout << "Cloning -> " << get_fastfood_store_name() << endl;
    return shared_ptr<FastFood>(new Pizza(*this));
}