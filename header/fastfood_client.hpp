#ifndef FASTFOOD_CLIENT
#define FASTFOOD_CLIENT
#include "../header/fastfood_category_burger.hpp"
#include "../header/fastfood_category_pizza.hpp"
#include "../header/fastfood_category_taco.hpp"
#include <iostream>
#include <string>
#include <vector>

/* Factory that manages prorotype instances and produces their clones. */
class FastFood;
class FastFood_Client
{
    vector<FastFood*> m_FastFood;
public:
    void fastfood_run();
    ~FastFood_Client();
};

#endif /* FASTFOOD_CLIENT */
