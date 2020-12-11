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
    virtual vector<string> ssort(vector<Rest*> r_list) ;

    virtual vector<double> psort(vector<Rest*> p_list) ;
};

#endif _SORT_