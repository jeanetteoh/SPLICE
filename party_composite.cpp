#include <iostream>
#include <vector>
#include "party_composite.hpp"

using namespace std;

string printPartyMember(){
    return PartyMemberName;
}
void addPartyMember(string partyMemberName){
    masterMember.push_back(partyMemberName);
}
void deletePartyMember(string partyMemberName){
    masterMember.remove(partyMemberName);
    partyMemberName = "null";

}
void modifyPartyMember(string partyMemberName){
    string newName;
    partyMemberName = newName;
}
void getPartyMemberName(){
    return PartyMemberName;
}

