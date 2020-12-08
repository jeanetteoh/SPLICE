#ifndef USER
#define USER
#include "../party_component.hpp"
#include <iostream>

using namespace std;

class menu_component;
class user : public party_component
{
private:
    int num_users;
    string user_name;
    vector<menu_component*> v_cart;

public:
    user(const string &user_name) : party_component()
    {
        num_users++;
        this->user_name = user_name;
    }

    string get_name()
    {
        return this->user_name;
    }

    int get_size()
    {   
        return num_users;
    }

    void print()
    {
        cout << this->user_name;
    }

    void add(party_component *party_component)
    {
        cout << "Error, cannot perform add" << endl;
    }

    void remove(party_component *m_remove)
    {
        cout << "Error, cannot perform remove" << endl;
    }

    virtual ~user()
    {

    }

    void add_to_cart(menu_component *item)
    {
        v_cart.emplace_back(item);
    }

    // void add_to_cart(menu_component *item)
    // {
    //     cout << "Error, cannot add menu item to party" << endl;
    // }
};

#endif /* USER */
