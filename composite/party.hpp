#ifndef PARTY
#define PARTY
#include <iostream>
#include <string>

using namespace std;

struct party
{
    int party_size;
    string party_name;

    party(const string &party_name, const int &party_size)
    {
        this->party_name = party_name;
        this->party_size = party_size;
    }

    void create_users(const int &party_size)
    {
        int num_party_size_counter = 0;
        while(num_party_size_counter < party_size)
        {
            
        }
    }
};


#endif /* PARTY */
