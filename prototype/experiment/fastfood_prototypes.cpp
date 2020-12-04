#include "../header/fastfood_prototypes.hpp"
#include "../header/fastfood_restaurant.hpp"
#include <iostream>

vector<string> FastFood_Prototypes::get_FastFood_Prototype_Keys()
{
    vector<string> FastFood_Prototype_Keys;
    FastFood_Prototype_Keys.reserve(m_FastFood_Prototypes.size());
    for (const auto &kv : m_FastFood_Prototypes)
    {
        FastFood_Prototype_Keys.push_back(kv.first);
    }
    return FastFood_Prototype_Keys;
}

void FastFood_Prototypes::register_FastFood_Prototype(const string &FastFood_Prototype_Key, FastFoodPtr FastFood_Prototype)
{
    if (auto it = m_FastFood_Prototypes.find(FastFood_Prototype_Key); it == end(m_FastFood_Prototypes))
    {
        m_FastFood_Prototypes[FastFood_Prototype_Key] = FastFood_Prototype;
    }
    else
    {
        cout << "Duplicate Key" << endl;
    }
    
}

FastFoodPtr FastFood_Prototypes::deregister_FastFood_Prototype(const string &FastFood_Prototype_Key)
{
    if (auto it = m_FastFood_Prototypes.find(FastFood_Prototype_Key); it != end(m_FastFood_Prototypes))
    {
        auto FastFood = m_FastFood_Prototypes[FastFood_Prototype_Key];
        m_FastFood_Prototypes.erase(FastFood_Prototype_Key);
        return FastFood;
    }
    return nullptr;
}

FastFoodPtr FastFood_Prototypes::get_FastFood_Prototype(const string &FastFood_Prototype_Key)
{
    if (auto it = m_FastFood_Prototypes.find(FastFood_Prototype_Key); it != end(m_FastFood_Prototypes))
    {
        return m_FastFood_Prototypes[FastFood_Prototype_Key]->clone();
    }
    return nullptr;
}