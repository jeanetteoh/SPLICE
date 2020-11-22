#ifndef FASTFOOD_CREATOR
#define FASTFOOD_CREATOR
#include <iostream>
#include <string>
#include <string_view>

using namespace std;
class FastFood;
FastFood *Create(string_view fastfood_type, const string &fastfood_store_name);

#endif /* FASTFOOD_CREATOR */
