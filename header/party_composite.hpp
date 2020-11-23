#include "../header/fastfood_client.hpp"
#include "../header/fastfood_creator.hpp"
#include "../header/fastfood_restaurant.hpp"
#include "../header/fastfood_category_burger.hpp"
#include "../header/fastfood_category_taco.hpp"
#include "../header/fastfood_category_pizza.hpp"
#include "../fastfood_interface/fastfood_display.hpp"
#include <iostream>
#include <vector>
using namespace std;

struct Person{
    string name;
    float amount;
    vector<items*> order;

}
class Party{
public:
virtual void Add(Person* a);
virtual void Remove();
virtual void Delete(Person* a);

private:
string restaurant_location;
\\specification of which restaurant they are at
int numParty;
\\the number of people within the party
;}
