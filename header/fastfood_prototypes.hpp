#ifndef FASTFOOD_PROTOTYPES
#define FASTFOOD_PROTOTYPES
#include "../header/fastfood_restaurant.hpp"
#include <unordered_map>
#include <memory>
#include <string>

using namespace std;
class FastFood_Prototypes
{
    inline static unordered_map<string, FastFoodPtr> m_FastFood_Prototypes{};
    FastFood_Prototypes();
public:
    vector<string> get_FastFood_Prototype_Keys();
    static void register_FastFood_Prototype(const string &FastFood_Prototype_Key, FastFoodPtr FastFood_Prototype);
    static FastFoodPtr deregister_FastFood_Prototype(const string &FastFood_Prototype_Key);
    static FastFoodPtr get_FastFood_Prototype(const string &FastFood_Prototype_Key);
};

#endif /* FASTFOOD_PROTOTYPES */
