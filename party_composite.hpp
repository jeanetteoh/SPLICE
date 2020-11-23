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

class PartyMember{
    public:
    string partyMemberName;
    float amount;
    vector<items*> order;
    vector<Party*> PartyMembers;
    
    protected:
        string printPartMember();
        void addPartyMember(string partyMemberName);
        void deletePartyMember(string partyMemberName);
        void modifyPartyMember(string partyMemberName);
        void getPartyMemberName();
}
class Party{
public:
printPartMember();
        virtual void addPartyMember(string partyMemberName);
        virtual void deletePartyMember(string partyMemberName);
        virtual void modifyPartyMember(string partyMemberName);
        virtual void getPartyMemberName();

private:

string masterMember;
\\specification of which restaurant they are at
int numParty;
\\the number of people within the party

;}