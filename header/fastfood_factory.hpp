#ifndef FASTFOOD_FACTORY
#define FASTFOOD_FACTORY
#include "../header/mcdonalds_fastfood.hpp"
#include "../header/tacobell_fastfood.hpp"
#include <iostream>
#include <string>
#include <vector>

/* Factory that manages prorotype instances and produces their clones. */
class FastFood;
class FastFood_Factory
{
    vector<FastFood*> m_FastFood;
public:
    void fastfood_run();
    ~FastFood_Factory();
};

#endif /* FASTFOOD_FACTORY */