#include "../header/rest.hpp"

Rest::Rest(const string &fastfood_store_name)
{
    this->fastfood_store_name = fastfood_store_name;
   // m_Restaurant = new Restaurant("Fast Food");
}

const string &Rest::get_fastfood_store_name() const
{
    return this->fastfood_store_name;
}

void Rest::set_fastfood_store_name(const string &fastfood_store_name)
{
    this->fastfood_store_name = fastfood_store_name;
}

Rest::~Rest()
{
    
}


void Rest::set_fastfood_store_price(const string &fastfood_store_price)
{
    this->fastfood_store_price = fastfood_store_price;
}

const string &Rest::get_fastfood_store_price() const
{
    return this->fastfood_store_price;
}