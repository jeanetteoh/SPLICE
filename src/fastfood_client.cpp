#include "../header/fastfood_client.hpp"
#include "../header/fastfood_creator.hpp"
#include "../header/fastfood_restaurant.hpp"

#include <vector>
void FastFood_Client::fastfood_run()
{
    m_FastFood.push_back(Create("Burger", "McDonald's"));
    m_FastFood.push_back(Create("Taco", "Taco Bell"));
    m_FastFood.push_back(Create("Pizza", "Chick-Fil-A"));

    int count = 1;
    while (count != 0)
    {
        for (auto FastFood : m_FastFood)
        {
            FastFood->fastfood_display_store_info();
        }
        --count;
    }
}

FastFood_Client::~FastFood_Client()
{
    for (auto FastFood : m_FastFood)
    {
        delete FastFood;
    }
}