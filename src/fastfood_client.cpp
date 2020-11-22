#include "../header/fastfood_client.hpp"
#include "../header/fastfood_creator.hpp"
#include "../header/fastfood_restaurant.hpp"

#include <vector>
void FastFood_Client::fastfood_test_run()
{
    m_Burger.push_back(Create("Burger", "McDonald's"));
    m_Taco.push_back(Create("Taco", "Taco Bell"));
    m_Pizza.push_back(Create("Pizza", "Chick-Fil-A"));

    int count = 1;
    while (count != 0)
    {
        for (auto FastFood : m_Burger)
        {
            FastFood->fastfood_display_store_info();
        }
        --count;
    }
}

void FastFood_Client::fastfood_burger_run()
{
    
}
void fastfood_taco_run();
void fastfood_pizza_run();

FastFood_Client::~FastFood_Client()
{
    for (auto FastFood : m_Burger)
    {
        delete FastFood;
    }

    for (auto FastFood : m_Taco)
    {
        delete FastFood;
    }

    for (auto FastFood : m_Pizza)
    {
        delete FastFood;
    }
}