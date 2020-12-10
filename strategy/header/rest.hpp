
#ifndef _REST_
#define _REST_
#include <iostream>
#include <string>
using namespace std;

// create new objects 
class Rest {

    float food_price;
    string r_name;
    Rest* m_Rest;

public:
    Rest() = default;
    const string& get_name() const;
    void set_name(const string& r_name);

    const float& get_price() const;
    void set_price(const string& food_price);
};

#endif /* RESTAURANT */  