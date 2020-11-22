#include "../header/fastfood_factory.hpp"
#include <vector>

void FastFood_Factory::fastfood_run()
{
    m_FastFood.push_back(new McDonalds("McDonald's"));
    m_FastFood.push_back(new TacoBell("Taco Bell"));

    int count = 1;
    while(count != 0)
    {
        for(auto FastFood : m_FastFood)
        {
            FastFood->fastfood_display_store_info();
        }
        --count;   
    }
}

FastFood_Factory::~FastFood_Factory()
{
    for(auto FastFood : m_FastFood)
    {
        delete FastFood;
    }
}