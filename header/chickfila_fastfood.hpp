#ifndef CHICKFILA_FASTFOOD
#define CHICKFILA_FASTFOOD
#include "../header/restaurant.hpp"
#include "../header/fastfood_restaurant.hpp"

class ChickFilA : public FastFood
{
    using FastFood::FastFood;

public:
    void fastfood_display_store_info() override;
};

#endif /* CHICKFILA_FASTFOOD */
