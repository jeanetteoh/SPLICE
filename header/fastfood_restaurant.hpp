#ifndef FASTFOOD_RESTAURANT
#define FASTFOOD_RESTAURANT
#include "../header/restaurant.hpp"
#include <iostream>
#include <string>
using namespace std;

class Restaurant;
class FastFood
{
protected:
    string fastfood_store_name;
    Restaurant *m_Restaurant;

public:
    FastFood(const string &fastfood_store_name);

    virtual ~FastFood();

    const string &get_fastfood_store_name() const
    {
        return this->fastfood_store_name;
    }

    void set_fastfood_store_name(const string &fastfood_store_name)
    {
        this->fastfood_store_name = fastfood_store_name;
    }

    const string &get_fastfood_restaurant_category() const;

    void set_fastfood_restaurant_category(const string &fastfood_store_category);

    virtual void fastfood_display_store_info() = 0;

    
    // Restaurant *clone()
    // {
    //     return new FastFood(*this);
    // }

    // virtual Restaurant *clone() override;
};

#endif /* FASTFOOD_RESTAURANT */
