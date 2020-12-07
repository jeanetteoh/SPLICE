#include <iostream>
#include <vector>

using namespace std;

class Party{
    public:
        string printPartyMember();
        virtual void addPartyMember(string partyMemberName);
        virtual void deletePartyMember(string partyMemberName);
        virtual void modifyPartyMember(string partyMemberName);
        virtual void getPartyMemberName();
        virtual ~Party() {}

    protected:
        string partyMemberName;
        float amount;
        vector<Party*> PartyMembers;
};
class PartyMember : public Party{
    public:
        string printPartMember();
        void addPartyMember(string partyMemberName);
        void deletePartyMember(string partyMemberName);
        void modifyPartyMember(string partyMemberName);
        void getPartyMemberName();

    protected:
    string masterMember;
    //specification of which restaurant they are at
    int numParty;
    //the number of people within the party
;}