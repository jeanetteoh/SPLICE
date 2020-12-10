#ifndef __PRICE_SORT_HPP__
#define __PRICE_SORT_HPP__
#include "../header/rest.hpp"
#include "../header/sort.hpp"
#include <iostream>
#include <vector>

class priceSort : public Sort
{
public:
    priceSort() {};
    vector<string> sort(vector<Rest*> r_list);
   

};

#endif //__PRICE_SORT_HPP__