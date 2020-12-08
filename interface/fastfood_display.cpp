#include "../interface/fastfood_display.hpp"

void FastFood_Display::display_burger_places()
{
     cout << "\nBurger Places\n==================" << endl;
     FastFood_Client BurgerPlaces;
     BurgerPlaces.fastfood_burger_run();
     cout << endl;

     cout << "Chose a burger restaurant from the selection below!" << endl;
     int choice;
     cin >> choice;
     switch (choice)
     {
          case 1:
          menu_mcdonalds_display m_1;
          m_1.display_mcdonalds_customer_favorites();
     }
}

void FastFood_Display::display_taco_places()
{
     cout << endl;
     cout << "Taco Places" << endl;
     cout << "------------------------" << endl;
     FastFood_Client TacoPlaces;
     TacoPlaces.fastfood_taco_run();
     cout << endl;
}

void FastFood_Display::display_pizza_places()
{
     cout << endl;
     cout << "Pizza Places" << endl;
     cout << "------------------------" << endl;
     FastFood_Client PizzaPlaces;
     PizzaPlaces.fastfood_pizza_run();
     cout << endl;
}