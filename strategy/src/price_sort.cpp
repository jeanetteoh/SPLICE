#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include "../strategy/header/rest.hpp"
#include "../strategy/header/sort.hpp"
#include "../strategy/header/price_sort.hpp"

using namespace std;

class Rest
    vector<string> priceSort::sort(vector<Rest*> r_list)
{

    vector<float> pricelist = new vector<string>;
    vector<string> namelist = new vector<string>;

    Rest* getprice;
    Rest* getname;
    for (int i = 0; i < r_list.size(); i++) {

        Rest* getprice = r_list.at(i);
        pricelist.push_back(getprice->get_price());
        namelist.push_back(getprice->get_name());
    }

    pricelist

        /*print */
        vector<string >::iterator it = pricelist.begin();

    for (; it != r_list.end(); ++it) {

        pricelist.push_back(it->get_price());
        cout << "The price is " << it->get_price() << endl;

    }
    /*sort by price */