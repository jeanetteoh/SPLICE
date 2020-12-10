#include "../header/rest.hpp"


Rest::Rest(string& r_name, float& food_price)
{
    this->r_name = r_name;
    m_Rest = new Rest("Taco", 0);
}

const string& Rest::get_name() const
{
    return this->r_name;
}

void Rest::set_name(const string& rest_name)
{
    this->r_name = r_name;
}

void Rest::set_price(const float& food_price)
{
    this->food_price = food_price;
}

const float& Rest::get_price() const
{
    return this->food_price;
}