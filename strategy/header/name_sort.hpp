#ifndef __NAME_SORT_HPP__
#define __NAME_SORT_HPP__
#include "../header/rest.hpp"
#include "../header/sort.hpp"
#include <iostream>
#include <vector>

class nameSort : public Sort
{
public:
    nameSort() {};
    vector<string> sort(vector<Rest*> r_list);

};
