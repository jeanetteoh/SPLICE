#include "../strategy/header/rest.hpp"

class Rest

    class Sort
{
public:
    /* Constructors */
    Sort() {};

    /* Pure Virtual Functions */
    virtual vector<string> sort(vector<Rest*> r_list) = 0;
};