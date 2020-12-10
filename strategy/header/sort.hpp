#ifndef _SORT_
#define _SORT_
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#include "rest.hpp"

class Sort
{
public:
    /* Constructors */
    Sort() {};

    /* Pure Virtual Functions */
    virtual vector<string> ssort(vector<Rest*> r_list) = 0;
};

#endif _SORT_