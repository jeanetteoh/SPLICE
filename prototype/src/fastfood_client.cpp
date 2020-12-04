#include "../header/fastfood_client.hpp"
#include "../header/fastfood_creator.hpp"
#include "../header/fastfood_restaurant.hpp"
#include "../header/restaurant.hpp"

void FastFood_Client::fastfood_burger_run()
{
    int burgerCount{1};

    m_Burger.push_back(Create("McDonald's", "Burger"));
    
    auto ChickFilA = m_Burger[0]->clone();
    ChickFilA->set_fastfood_store_name("Chick-Fil-A");
    m_Burger.push_back(ChickFilA);

    auto InNOut = m_Burger[0]->clone();
    InNOut->set_fastfood_store_name("In-N-Out");
    m_Burger.push_back(InNOut);

    auto BurgerKing = m_Burger[0]->clone();
    BurgerKing->set_fastfood_store_name("Burger King");
    m_Burger.push_back(BurgerKing);

    auto CarlsJr = m_Burger[0]->clone();
    CarlsJr->set_fastfood_store_name("Carl's Jr");
    m_Burger.push_back(CarlsJr);

    int listBurger = 1;
    while(burgerCount != 0)
    {
        for (auto FastFood : m_Burger)
        {
            cout << listBurger++ << ". ";
            FastFood->fastfood_display_store_info();
        }
    --burgerCount;
    }
}

void FastFood_Client::fastfood_pizza_run()
{
    int pizzaCount{1};

    m_Pizza.push_back(Create("Domino's Pizza", "Pizza"));

    auto PizzaHut = m_Pizza[0]->clone();
    PizzaHut->set_fastfood_store_name("Pizza Hut");
    m_Pizza.push_back(PizzaHut);

    auto PapaJohns = m_Pizza[0]->clone();
    PapaJohns->set_fastfood_store_name("Papa John's Pizza");
    m_Pizza.push_back(PapaJohns);

    int listPizza = 1;
    while (pizzaCount != 0)
    {
        for (auto FastFood : m_Pizza)
        {
            cout << listPizza++ << ". ";
            FastFood->fastfood_display_store_info();
        }
        --pizzaCount;
    }
}

void FastFood_Client::fastfood_taco_run()
{
    int tacoCount{1};

    m_Taco.push_back(Create("Taco Bell", "Taco"));

    auto DelTaco = m_Taco[0]->clone();
    DelTaco->set_fastfood_store_name("Del Taco");
    m_Taco.push_back(DelTaco);

    int listTaco = 1;
    while (tacoCount != 0)
    {
        for (auto FastFood : m_Taco)
        {
            cout << listTaco++ << ". ";
            FastFood->fastfood_display_store_info();
        }
        --tacoCount;
    }
}

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