#ifndef MENU_MCDONALDS
#define MENU_MCDONALDS
#include "../../composite/menu_component.hpp"
#include <iostream>

using namespace std;

class menu_mcdonalds : public menu_component
{
protected:
    string menu_name_mcdonalds;
    string menu_description_mcdonalds;
    vector<menu_component*> v_menu_mcdonalds;
public:
    menu_mcdonalds(string menu_name_mcdonalds, string menu_description_mcdonalds) : menu_component()
    {
        this->menu_name_mcdonalds = menu_name_mcdonalds;
        this->menu_description_mcdonalds = menu_description_mcdonalds;
    }

    string get_name()
    {
        return this->menu_name_mcdonalds;
    }

    string get_description()
    {
        return this->menu_description_mcdonalds;
    }

    void add(menu_component *menu_component)
    {
        v_menu_mcdonalds.push_back(menu_component);
    }

    // void remove(menu_component *menu_component, int index)
    // {
    //     v_menu_mcdonalds.erase(v_menu_mcdonalds.begin() + index);
    // }

    void print()
    {
        cout << "\nMenu Name: " << this->menu_name_mcdonalds << endl
             << "Menu Description: " << this->menu_description_mcdonalds << endl << endl;
        for(auto m_menu : v_menu_mcdonalds)
        {
            m_menu->print();
        }
    }
};


#endif /* MENU_MCDONALDS */
