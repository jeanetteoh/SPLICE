#ifndef MCDONALDS_FASTFOOD
#define MCDONALDS_FASTFOOD
#include "../header/restaurant.hpp"
#include "../header/fastfood_restaurant.hpp"

class McDonalds : public FastFood
{
    using FastFood::FastFood;

public:
    void fastfood_display_store_info() override;
};

#endif /* MCDONALDS_FASTFOOD */