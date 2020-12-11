#ifndef __NAME_SORT_HPP__
#define __NAME_SORT_HPP__
#include "rest.hpp"
#include "sort.hpp"
#include <iostream>
#include <vector>

class nameSort : public Sort
{
public:
    nameSort() {};
    vector<string> ssort(vector<Rest*> r_list);

};
#endif