
#ifndef _REST_
#define _REST_
#include <iostream>
#include <string>
using namespace std;

class Rest
{
private:
    double fastfood_store_price;
    //string fastfood_store_price;
    string fastfood_store_name;
    //Restaurant *m_Restaurant;

public:
    Rest(){};
    Rest(const string &fastfood_store_name);

    const string &get_fastfood_store_name() const;
    void set_fastfood_store_name(const string &fastfood_store_name);
    
  
    const double &get_fastfood_store_price() const;
    void set_fastfood_store_price(const double &fastfood_store_price);

    //const string &get_fastfood_store_price() const;
    //void set_fastfood_store_price(const string &fastfood_store_price);

    /* Rule of three */
    virtual ~Rest();
 
};

#endif //_REST_ 