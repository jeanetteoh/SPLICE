#include "../header/restaurant.hpp"
#include "../header/fastfood_restaurant.hpp"

FastFood::FastFood(const string &fastfood_store_name)
{
    this->fastfood_store_name = fastfood_store_name;
    m_Restaurant = new Restaurant("Fast Food");
}

FastFood::~FastFood()
{
    delete m_Restaurant;
}

void FastFood::set_fastfood_restaurant_category(const string &fastfood_store_category)
{
    m_Restaurant->set_restaurant_category(fastfood_store_name);
}

const string &FastFood::get_fastfood_restaurant_category() const
{
    return m_Restaurant->get_restaurant_category();
}