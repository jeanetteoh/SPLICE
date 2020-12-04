#include "../fastfood_interface/fastfood_display.hpp"

void FastFood_Display::display_restaurant_prototype()
{
    string userOption;
    bool check = true;
    while (check)
    {
        cout << "Welcome to SPLICE. Please select a restaurant category" << endl
             << endl;
        cout << "Displaying all restaurant categories..." << endl;
        int listRestaurantCategories = 1;
        for (unsigned i = 0; i < listRestaurantCategories; ++i)
        {
            cout << listRestaurantCategories << ": "
                 << "Fast Food Places" << endl;
        }
        cout << "Please input 'Q' to quit" << endl;
        cout << endl
             << endl;
        cout << "Choose an option: " << endl;
        cin >> userOption;
        if (userOption == "q" || userOption == "Q")
        {
            cout << "\nBye!" << endl;
            check = false;
            break;
        }
        else if (userOption == "1")
        {
            display_restaurant_category_list();
        }
    }
}

void FastFood_Display::display_restaurant_category_list()
{
    cout << "Displaying all Fast Food Places" << endl
         << endl;
    cout << "Burger Places" << endl;
    cout << "------------------------" << endl;
    FastFood_Client BurgerPlaces;
    BurgerPlaces.fastfood_burger_run();
    cout << endl
         << endl;

    cout << "Taco Places" << endl;
    cout << "------------------------" << endl;
    FastFood_Client TacoPlaces;
    TacoPlaces.fastfood_taco_run();
    cout << endl
         << endl;

    cout << "Pizza Places" << endl;
    cout << "------------------------" << endl;
    FastFood_Client PizzaPlaces;
    PizzaPlaces.fastfood_pizza_run();
    cout << endl
         << endl;
}