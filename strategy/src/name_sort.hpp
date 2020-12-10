#include <vector>
#include <iostream>
#include <algorithm>

#include <string>
#include "../strategy/header/name_sort.hpp"
#include "../strategy/header/rest.hpp"
#include "../strategy/header/sort.hpp"

class Rest

    bool compareR_name(Rest* a, Rest* b) {

    return a->get_name.compare(b->get_name) < 0;
}


vector<string> nameSort::sort(vector<Rest*> r_list) {


    vector<string> namelist = new vector<string>;

    for (int i = 0; i < r_list.size(); i++) {

        Rest* getname = r_list.at(i);
        namelist.push_back(getname->get_name)

    }


    vector<string >::iterator it = list.begin();

    for (; it != r_list.end(); ++it) {

        namelist.push_back(it->get_name());
        cout << "The name is " << it->get_name() << endl;

    }

    /*sort by name */
    sort(namelist.begin(), namelist.end(), compareR_name); //

    return namelist;


}