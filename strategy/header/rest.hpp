
#ifndef _RESTAURANT_S_
#define _RESTAURANT_S_
#include <iostream>
#include <string>
using namespace std;

// Specify the kinds of objects to create using a prototypical instance, and create new objects by copying this prototype
class Rest {

    float food_price;
    string r_name;
    Rest* m_Rest;

public:
    Rest() = default;
    const string& get_name() const;
    void set_name(const string& rest_name);

    const float& get_price() const;
    void set_price(const string& food_price);
};

#endif /* RESTAURANT */  