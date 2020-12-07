#include "../header/fastfood_client.hpp"
#include "../header/fastfood_creator.hpp"
#include "../header/fastfood_restaurant.hpp"
#include "../header/fastfood_category_burger.hpp"
#include "../header/fastfood_category_taco.hpp"
#include "../header/fastfood_category_pizza.hpp"
#include "../fastfood_interface/fastfood_display.hpp"
#include <iostream>
using namespace std;

string splice_key(){
    bool key  = false;
    while (key = false);
    char answer;
    cout << "Welcome to SPLICE! Get started with your order" << endl;
    cout << "What restaurant did you order at?" << endl << endl;
    cout << "     SPLICE KEY:     " << endl;
    cout << "McDonalds - '1' " << endl;
    cout << "Chick-Fil-A - '2' " << endl;
    cout << "Taco Bell - '3' " << endl;
    cout << "Quit - 'Q' " << endl;
    cin >> answer;
    cout << endl;
}

int main(){
    int numPeople = 0;

    cout << "Hello! How many people (including yourself) are in your party? Please enter a value 1 - 20." << endl;
    cin >> numPeople;

    if(numPeople == 0){
        cout << "Please input a valid number between 1-20" << endl;
        cin >> numPeople;
    }
    else if (numPeople < 0 && numPeople > 21){
        string correct_answer = "No";
        cout << "Our system indicates that you have " << numPeople << " people. Is this correct?  (Enter Yes or No)." << endl;
        cin >>  correct_answer;
        cout << endl;
    }
    else if (numPeople <= 21){
        cout << "Your party is too big! Please input a number between 1 - 20" << endl;
        cin >> numPeople;
    }


    splice_key();
    if (answer == 'M' || answer == 'm'){
        cout << " Mcdonald's Menu" << endl;
        key = true;
        //Input other info to start composite
    }
    else if (answer == 'C' || answer == 'c'){
        cout << " Chick-Fil-A's Menu" << endl;
        key = true;
        //Input other info to start composite
    }
    else if (answer == 'T' || answer == 't'){
            cout << " Taco Bell's Menu" << endl;
            key = true;
            //Input other info to start composite
    }
    else if (answer == 'Q' || answer == 'q'){
        cout << "Goodbye!" << endl;
        key = true;
        return 0;
    }
    else{
        cout << "Invalid input! Please re-enter an input." << endl;
        splice_key();
    }
}

