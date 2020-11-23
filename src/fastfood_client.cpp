#include "../header/fastfood_client.hpp"
#include "../header/fastfood_creator.hpp"
#include "../header/fastfood_restaurant.hpp"
#include "../header/fastfood_prototypes.hpp"
#include "../header/restaurant.hpp"
#include <vector>

FastFoodPtr getMcDonalds()
{
    auto FastFood = FastFood_Prototypes::get_FastFood_Prototype("Burger");
    FastFood->set_fastfood_store_name("McDonald's");
    FastFood->set_fastfood_restaurant_category("Fast Food");
    Restaurant McDonalds{"Fast Food"};
    FastFood->set_fastfood_restaurant_category(McDonalds.get_restaurant_category());
    return FastFood;
}

void FastFood_Client::fastfood_test_run()
{
    m_Burger.push_back(getMcDonalds());
    m_Burger.at(0)->fastfood_display_store_info();
    // for (auto burger_restaurants : m_Burger)
    // {
    //     burger_restaurants->fastfood_display_store_info();
    // }
}

// void FastFood_Client::fastfood_test_run()
// {
//     m_Burger.push_back(Create("Burger", "McDonald's"));
//     m_Taco.push_back(Create("Taco", "Taco Bell"));
//     m_Pizza.push_back(Create("Pizza", "Chick-Fil-A"));

//     int count = 1;
//     while (count != 0)
//     {
//         for(auto burger_restaurants : m_Burger)
//         {
//             burger_restaurants->fastfood_display_store_info();
//         }

//         for(auto taco_restaurants : m_Taco)
//         {
//             taco_restaurants->fastfood_display_store_info();
//         }

//         for(auto pizza_restaurants : m_Pizza)
//         {
//             pizza_restaurants->fastfood_display_store_info();
//         }

//         --count;
//     }
// }

// void FastFood_Client::fastfood_burger_run()
// {
//     auto burger_restaurants = m_Burger[0]->clone();
//     burger_restaurants->set_fastfood_store_name("Chick-Fil-A");
//     m_Burger.push_back(burger_restaurants);
// }
// void fastfood_taco_run()
// {

// }

// void fastfood_pizza_run()
// {

// }

// FastFood_Client::~FastFood_Client()
// {
//     for (auto FastFood : m_Burger)
//     {
//         delete FastFood;
//     }

//     for (auto FastFood : m_Taco)
//     {
//         delete FastFood;
//     }

//     for (auto FastFood : m_Pizza)
//     {
//         delete FastFood;
//     }
// }