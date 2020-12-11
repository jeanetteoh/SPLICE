#ifndef __PRICE_SORT_HPP__
#define __PRICE_SORT_HPP__
#include "rest.hpp"
#include "sort.hpp"
#include <iostream>
#include <vector>

class priceSort : public Sort
{
public:
    priceSort() {};
    vector<double> psort(vector<Rest*> p_list);
   
};

#endif //__PRICE_SORT_HPP__