#include "party_composite.hpp"
#include <iostream>
#include <vector>

using namespace std;

string printPartyMember(){
    return PartyMember;
}
void addPartyMember(string partyMemberName){
    memberMaster.push_back(partyMemberName);
}
void deletePartyMember(string partyMemberName){
    memberMaster.remove(partyMemberName);
    partyMemberName = "null";

}
void modifyPartyMember(string partyMemberName){
    string newName;
    this->partMemberName = newName;
}
void getPartyMemberName(){
    return PartyMemberName;
}
