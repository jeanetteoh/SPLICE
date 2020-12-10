#include <vector>
#include <iostream>
#include <algorithm>

#include <string>
#include "../header/name_sort.hpp"
#include "../header/rest.hpp"
#include "../header/sort.hpp"




    bool compareR_name(Rest* a, Rest* b){
        return a->get_fastfood_store_name().compare(b->get_fastfood_store_name()) < 0;
    };



vector<string> nameSort::ssort(vector<Rest*> r_list) {

    vector<string> namelist ;

    for (int i = 0; i < r_list.size(); i++) {

        Rest* addname = r_list.at(i);
        namelist.push_back(addname->get_fastfood_store_name() );

    }

    vector<string >::iterator it = namelist.begin();

    /*sort by food name*/

    sort(namelist.begin(), namelist.end(), compareR_name); //

    return namelist;


}