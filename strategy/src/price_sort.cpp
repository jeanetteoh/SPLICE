#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include "../header/rest.hpp"
#include "../header/sort.hpp"
#include "../header/price_sort.hpp"

using namespace std;

//class Rest
 vector<string> priceSort::sort(vector<Rest*> r_list)
{

    vector<string> pricelist;
   

    for (int i = 0; i < r_list.size(); i++) {

        Rest* addprice = r_list.at(i);
        pricelist.push_back( addprice->get_fastfood_store_price());
          
          //atof( const addprice->get_fastfood_store_price() );

          //pricelist.push_back(atof(addprice->get_fastfood_store_price())

    }


                      
    for (int i = 0; i <pricelist.size(); i++) {
    for (int j = i; j < (pricelist.size()); j++) {

        if (pricelist.at(i) > pricelist.at(j)) {
            std::swap(pricelist.at(i) , pricelist.at(j));
        }
    }
}
}
    

    /*sort by price */