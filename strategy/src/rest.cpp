#include "../header/rest.hpp"

Rest::Rest(){

            fastfood_store_price = 0;
            fastfood_store_name = "";
}

Rest::Rest(string fastfood_store_name)
{
    this->fastfood_store_name = fastfood_store_name;
   
}

string Rest::get_fastfood_store_name() 
{
    return this->fastfood_store_name;
}

void Rest::set_fastfood_store_name(string fastfood_store_name)
{
    this->fastfood_store_name = fastfood_store_name;
}

void Rest::set_fastfood_store_price( double fastfood_store_price)
{
    this->fastfood_store_price = fastfood_store_price;
}

double Rest::get_fastfood_store_price() 
{
    return this->fastfood_store_price;
}


Rest::~Rest(){}



