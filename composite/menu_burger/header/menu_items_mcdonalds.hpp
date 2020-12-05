#ifndef MENU_ITEMS_MCDONALDS
#define MENU_ITEMS_MCDONALDS
#include "../../composite/menu_component.hpp"

class menu_items_mcdonalds : public menu_component
{
private:
    string item_name_mcdonalds;
    string item_description_mcdonalds;
    double item_price_mcdonalds;

public:
    menu_items_mcdonalds(string item_name_mcdonalds, string item_description_mcdonalds, double item_price_mcdonalds) : menu_component()
    {
        this->item_name_mcdonalds = item_name_mcdonalds;
        this->item_description_mcdonalds = item_description_mcdonalds;
        this->item_price_mcdonalds = item_price_mcdonalds;
    }

    string get_name()
    {
        return this->item_name_mcdonalds;
    }

    string get_description()
    {
        return this->item_description_mcdonalds;
    }

    double get_item_price()
    {
        return this->item_price_mcdonalds;
    }

    void print()
    {
        cout << "Item Name: " << this->item_name_mcdonalds << endl
             << "Item Description: " << this->item_description_mcdonalds << endl
             << "Item Price: " << this->item_price_mcdonalds << endl;
    }
};

#endif /* MENU_ITEMS_MCDONALDS */
