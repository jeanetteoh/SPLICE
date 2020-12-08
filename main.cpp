#include "include.hpp"

using namespace std;

int fastfood_display()
{
    bool condition = true;
    string user_option = "";
    int user_fastfood_option = 0;
    int user_fastfood_option_choice = 0;

    cout << "\nDid your party eat at...\n1. Burger Places\n2. Taco Places\n3. Pizza Places" << endl;
    cin >> user_fastfood_option;

    while (condition)
    {
        if (user_option == "q" || user_option == "Q")
        {
            cout << "Thank you for using SPLICE." << endl;
            condition = false;
            break;
        }
        else
        {
            switch (user_fastfood_option)
            {
            case 1:
                FastFood_Display i_burger_places;
                i_burger_places.display_burger_places();
                
                cout << "Choose a selection from the above restaurants!" << endl;
                
                if(user_fastfood_option_choice == 1)
                {

                }
                else if(user_fastfood_option_choice == 2)
                {

                }
                else if(user_fastfood_option == 3)
                {

                }
                else
                {

                }

                return 1;
            case 2:
                FastFood_Display i_taco_places;
                i_taco_places.display_taco_places();
                return 2;
            case 3:
                FastFood_Display i_pizza_places;
                i_pizza_places.display_pizza_places();
                return 3;
            }
        }
    }
}

void setup_party_of_1(party_component *i_party_component)
{
    string user1 = "";

    cout << "Give User #1 a name!" << endl;
    cin >> user1;
    party_component *i_user1 = new user(user1);

    i_party_component->add(i_user1);

    cout << "\nParty Details" << endl;
    cout << "================" << endl;
    i_party_component->print();

    fastfood_display();
}

void setup_party_of_2(party_component *i_party_component)
{
    string user1 = "";
    string user2 = "";

    cout << "Give User #1 a name!" << endl;
    cin >> user1;
    party_component *i_user1 = new user(user1);

    cout << "Give User #2 a name!" << endl;
    cin >> user2;
    party_component *i_user2 = new user(user2);

    i_party_component->add(i_user1);
    i_party_component->add(i_user2);

    cout << "\nParty Details" << endl;
    cout << "================" << endl;
    i_party_component->print();

    fastfood_display();
}

void setup_party_of_3(party_component *i_party_component)
{
    string user1 = "";
    string user2 = "";
    string user3 = "";

    cout << "Give User #1 a name!" << endl;
    cin >> user1;
    party_component *i_user1 = new user(user1);

    cout << "Give User #2 a name!" << endl;
    cin >> user2;
    party_component *i_user2 = new user(user2);

    cout << "Give User #3 a name!" << endl;
    cin >> user3;
    party_component *i_user3 = new user(user3);

    i_party_component->add(i_user1);
    i_party_component->add(i_user2);
    i_party_component->add(i_user3);

    cout << "\nParty Details" << endl;
    cout << "================" << endl;
    i_party_component->print();

    fastfood_display();
}

void setup_party_of_4(party_component *i_party_component)
{
    string user1 = "";
    string user2 = "";
    string user3 = "";
    string user4 = "";

    cout << "Give User #1 a name!" << endl;
    cin >> user1;
    party_component *i_user1 = new user(user1);

    cout << "Give User #2 a name!" << endl;
    cin >> user2;
    party_component *i_user2 = new user(user2);

    cout << "Give User #3 a name!" << endl;
    cin >> user3;
    party_component *i_user3 = new user(user3);

    cout << "Give User #4 a name!" << endl;
    cin >> user4;
    party_component *i_user4 = new user(user4);

    i_party_component->add(i_user1);
    i_party_component->add(i_user2);
    i_party_component->add(i_user3);
    i_party_component->add(i_user4);

    cout << "\nParty Details" << endl;
    cout << "================" << endl;
    i_party_component->print();

    fastfood_display();
}

void setup_party_of_5(party_component *i_party_component)
{
    string user1 = "";
    string user2 = "";
    string user3 = "";
    string user4 = "";
    string user5 = "";

    cout << "Give User #1 a name!" << endl;
    cin >> user1;
    party_component *i_user1 = new user(user1);

    cout << "Give User #2 a name!" << endl;
    cin >> user2;
    party_component *i_user2 = new user(user2);

    cout << "Give User #3 a name!" << endl;
    cin >> user3;
    party_component *i_user3 = new user(user3);

    cout << "Give User #4 a name!" << endl;
    cin >> user4;
    party_component *i_user4 = new user(user4);

    cout << "Give User #5 a name!" << endl;
    cin >> user5;
    party_component *i_user5 = new user(user5);

    i_party_component->add(i_user1);
    i_party_component->add(i_user2);
    i_party_component->add(i_user3);
    i_party_component->add(i_user4);
    i_party_component->add(i_user5);

    cout << "\nParty Details" << endl;
    cout << "================" << endl;
    i_party_component->print();

    fastfood_display();
}

int main()
{
    bool party_condition = true;
    string i_party_name = "";
    string user2 = "";
    string user3 = "";
    string user4 = "";
    string user5 = "";
    int i_party_size = 0;

    cout << "Hello! Welcome to SPLICE.\nRemember, you can press 'q' at anytime to quit!" << endl;
    cout << "Give your party a name! Press 'Enter' when you are done!" << endl;
    cin >> i_party_name;
    if(i_party_name == "q" || i_party_name == "Q")
    {
        return 0;
    }

    cout << "How many people are in your party? We can only support up to 5 people." << endl;
    cin >> i_party_size;
    
    if(i_party_size <= 0 || i_party_size > 5)
    {
        cout << "Invalid input! Did you make sure your party is less than the size of 5?" << endl;
        cin >> i_party_size;
    }
    
    party_component *i_party = new party(i_party_name, i_party_size);
    
    while(party_condition)
    {
        if (i_party_size == 1)
        {
            setup_party_of_1(i_party);
            party_condition = false;
            break;
        }
        else if (i_party_size == 2)
        {
            setup_party_of_2(i_party);
            party_condition = false;
            break;
        }
        else if (i_party_size == 3)
        {
            setup_party_of_3(i_party);
            party_condition = false;
            break;
        }
        else if (i_party_size == 4)
        {
            setup_party_of_4(i_party);
            party_condition = false;
            break;
        }
        else if (i_party_size == 5)
        {
            setup_party_of_5(i_party);
            party_condition = false;
            break;
        }
    }    
    return 0;
}