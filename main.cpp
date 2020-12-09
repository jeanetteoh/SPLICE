#include "include.hpp"

using namespace std;


void display_burger_places()
{
    cout << "\nBurger Places\n===============" << endl;
    FastFood_Client i_burger_places;
    i_burger_places.fastfood_burger_run();
    cout << endl;

    cout << "Choose a selection from the above restaurants!" << endl;

    int choice = 0;
    cin >> choice;
    int burger_choice = 0;
    if (choice == 1)
    {
        menu_mcdonalds_display i_mcdonalds;
        i_mcdonalds.display_mcdonalds_customer_favorites();
        
        // burger_choice = 1;
    }
    else if (choice == 2)
    {
        menu_chickfilas_display i_chickfila;
        i_chickfila.display_chickfilas_customer_favorites();
        // burger_choice = 2;
    }
    else if (choice == 3)
    {
        menu_innouts_display i_innout;
        i_innout.display_innouts_customer_favorites();
        // burger_choice = 3;
    }
    else
    {
        cout << "Invalid Input!" << endl;
    }
}

void display_taco_places()
{
    cout << endl;
    cout << "Taco Places" << endl;
    cout << "------------------------" << endl;
    FastFood_Client TacoPlaces;
    TacoPlaces.fastfood_taco_run();
    cout << endl;
}

void display_pizza_places()
{
    cout << endl;
    cout << "Pizza Places" << endl;
    cout << "------------------------" << endl;
    FastFood_Client PizzaPlaces;
    PizzaPlaces.fastfood_pizza_run();
    cout << endl;
}

void fastfood_display()
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
            if (user_fastfood_option == 1) // BURGER SELECTED
            {
                display_burger_places();
                break;
            }
            else if (user_fastfood_option == 2) // TACO SELECTED
            {
                display_taco_places();
                break;
            }
            else if (user_fastfood_option == 3) // PIZZA SELECTED
            {
                display_pizza_places();
                break;
            }
            else
            {
                cout << "Invalid Input!" << endl;
                condition = false;
                break;
            }
            
        }
    }
}

void i_add_to_cart(user_cart* i_uc, int item_number)
{

}

void setup_party_of_1(party_component *i_party_component)
{
    string user1 = "";
    int num_users = 1;

    cout << "Give User #1 a name!" << endl;
    cin >> user1;
    party_component *i_user1 = new user(user1);

    i_party_component->add(i_user1);

    cout << "\nParty Details" << endl;
    cout << "================" << endl;
    i_party_component->print();

    fastfood_display();

    cout << "For " << user1 << ", what would you like to add to their cart?" << endl;
    cout << "Please enter the item number from the restaurant you have selected." << endl;
    
    user_cart *i_user1_cart = new user_cart(i_user1);
    
    int item_number = 0;
    cin >> item_number;

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
    int i_party_size = 0;

    cout << "Hello! Welcome to SPLICE. Remember, you can press 'q' at anytime to quit!" << endl;
    cout << "Give your party a name! Press 'Enter' when you are done!" << endl;
    cin >> i_party_name;
    if (i_party_name == "q" || i_party_name == "Q")
    {
        return 0;
    }

    cout << "How many people are in your party? We can only support up to 5 people." << endl;
    cin >> i_party_size;

    if (i_party_size <= 0 || i_party_size > 5)
    {
        cout << "Invalid input! Did you make sure your party is less than the size of 5?" << endl;
        return 0;
    }

    party_component *i_party = new party(i_party_name, i_party_size);

    while (party_condition)
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