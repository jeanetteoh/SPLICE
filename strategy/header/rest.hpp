
#ifndef _REST_
#define _REST_
#include <iostream>
#include <string>
using namespace std;

class Rest
{
private:
    double fastfood_store_price;
    
    string fastfood_store_name;
    

public:
    Rest(){};

    Rest(string fastfood_store_name);

    string get_fastfood_store_name();
    void set_fastfood_store_name(string fastfood_store_name);
    
  
    double get_fastfood_store_price();
    void set_fastfood_store_price(double fastfood_store_price);

   
    virtual ~Rest();
 
};

#endif //_REST_ 