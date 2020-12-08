#ifndef MENU_DOMINOS_DISPLAY
#define MENU_DOMINOS_DISPLAY
#include "../composite/menu_component.hpp"
#include "../composite/menu_pizza/header/menu_items_dominos.hpp"
#include "../composite/menu_pizza/header/menu_dominos.hpp"

class menu_dominos_display
{
public:
    void display_dominos_customer_favorites()
    {
        menu_component *dominos_menu_customer_favorites = new menu_dominos("Taco Bell's Menu, Customer Favorites", "Following Options are the Most Popular Items at Taco Bell's");
        // CHICKEN AVOCADO TACO
        menu_component *chicken_avocado_taco = new menu_items_dominos(1, "", "", 2.99);
        // CHICKENLESS POLLO TACO
        menu_component *chickenless_pollo_taco = new menu_items_dominos(2, "", "", 2.99);
        //CALIFORNIA QUESO BURRITO
        menu_component *california_queso_burrito = new menu_items_dominos(3, "", "", 6.99);
        // CHICKEN TINGA BURRITO
        menu_component *chicken_tinga_burrito = new menu_items_dominos(4, "", "", 7.19);
        //ORIGINAL POLLO BOWL
        menu_component *original_pollo_bowl = new menu_items_dominos(5, "", "", 4.99);
        //DOUBLE CHICKEN BOWL
        menu_component *double_chicken_bowl = new menu_items_dominos(6, "", "", 1.99);
        menu_component *chips_and_guacamole_small = new menu_items_dominos(7, "", "", 2.49);
        menu_component *chips_and_guacamole_regular = new menu_items_dominos(8, "", "", 3.99);
        //DRINKS
        menu_component *drink_regular = new menu_items_dominos(9, "", "", 2.19);
        menu_component *drink_large = new menu_items_dominos(10, "", "", 2.39);

        dominos_menu_customer_favorites->add(chicken_avocado_taco);

        dominos_menu_customer_favorites->add(chickenless_pollo_taco);
        dominos_menu_customer_favorites->add(california_queso_burrito);
        dominos_menu_customer_favorites->add(chicken_tinga_burrito);
        dominos_menu_customer_favorites->add(original_pollo_bowl);
        dominos_menu_customer_favorites->add(double_chicken_bowl);

        dominos_menu_customer_favorites->add(chips_and_guacamole_small);
        dominos_menu_customer_favorites->add(chips_and_guacamole_regular);
        dominos_menu_customer_favorites->add(drink_regular);
        dominos_menu_customer_favorites->add(drink_large);

        dominos_menu_customer_favorites->print();
    }
};

#endif /* MENU_DOMINOS_DISPLAY */
