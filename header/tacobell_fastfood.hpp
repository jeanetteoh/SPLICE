#ifndef TACOBELL_FASTFOOD
#define TACOBELL_FASTFOOD
#include "../header/restaurant.hpp"
#include "../header/fastfood_restaurant.hpp"

class TacoBell : public FastFood
{
    using FastFood::FastFood;

public:
    void fastfood_display_store_info() override;
};

#endif /* TACOBELL_FASTFOOD */
