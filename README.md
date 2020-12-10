# CS100 SPLICE PROJECT
> Authors: [*Xin Wang*](https://github.com/xinwng), [*Jeanette Oh*](https://github.com/jeanetteoh), [*Hongan Zhang*](https://github.com/hongan-z)

## Phase I: Project Description

### Why is this project interesting to us?

SPLICE is a way of simplifying everyday experiences. Our group holds the idea of efficiency and convenience to a high level so we wanted to create an easy to use application that simplifies splitting the check with friends or family. It has always been an inconvenience to split a receipt and compute the intricate mathematics when trying to figure out which person needs to pay what amount. SPLICE attempts in providing a simpler way of denoting what was ordered, by who, and how much they need to pay.  

### What languages/tools/technologies do we plan to use?

This project will be coded in C++. We understand that testing is an integral part of successfully compiling a project, therefore we will be incorporating the standard Google Unit Test Framework (gtest) in pursuance of holding our project in a higher standard of quality. In addition, by completing this project, we strive to learn the importance of teamwork through GitFlow - including branching, resolving merge conflicts, opening pull requests, discussing code, and deploying our project.

### What will be the input/output for our project?

The inputs to our project will be the party name, party size, party member names, restaurant selection, and item selections in response to menu items from the restaurant that will be outputted. We will then create a unique cart for each party member that will serve as an intermediate step to our final output, which is the exact amount each consumer needs to pay per their specific carts. 

### What design patterns will we be incorporating?
**1. Prototype**

Incorporating the prototype design pattern within our project would entail creating multiple new types of restaurants that we can clone the template from. It would allow us to create copies of existing objects, and also modify it to our needs. As we are going to include numerous different restaurants, cloning each object would be more efficient and less expensive as opposed to creating new objects. For the purpose of this project, there will be no APIs utilized, and therefore we have decided to only implement 9 fastfood restaurants that fall into 3 categories: burgers, pizzas, and tacos. 

**2. Composite**

As the composite design pattern would allow us to treat individual objects in an uniformed manner. We have utilized this pattern for constructing the menu and its menu items, the parties and the party members, and lastly, linking the party members with their respective carts.

###### 2a. Constructing the menu and the menu items for different restaurants
As all ```menus (container)``` contain different ```menu items (leaf)```, the ```menu component (interface)``` will provide common specific operations that will delegate the work to the respective location in the hierarchy. For example, when constructing the menu and its items, the ```menu_component``` should successfully recognize the difference between what is a menu versus what is a menu item in our client. 

```c++
menu_component *mcdonalds_menu_customer_favorites = new menu_mcdonalds("McDonald's Menu, Customer Favorites", "Following Options are the Most Popular Items at McDonald's");
menu_component *big_mac = new menu_items_mcdonalds(1, "Big Mac", "Mouthwatering perfection starts with two 100% pure beef patties and Big Mac sauce sandwiched between a sesame seed bun. It’s topped off with pickles, crisp shredded lettuce, finely chopped onion and American cheese.", 3.99);
```
This should yield the output:
```
Menu Name: McDonald's Menu, Customer Favorites
Menu Description: Following Options are the Most Popular Items at McDonald's

Item Number: 1
Item Name: Big Mac
Item Description: Mouthwatering perfection starts with two 100% pure beef patties and Big Mac sauce sandwiched between a sesame seed bun. It’s topped off with pickles, crisp shredded lettuce, finely chopped onion and American cheese.
Item Price: 3.99
```

###### 2b. Constructing the parties and the party members
By utilizing the composite pattern to construct the ```parties (container)```, and the ```party members (leaves)``` - we have constructed the ```party_component (interface)``` to successfully recognize whether we are creating new parties or new party members. A snippet of how we utilized this portion of the composite pattern within our client is:

```c++
party_component *m_party_1 = new party("Party of 3", 3);
party_component *user_1 = new user("Xin");
party_component *user_2 = new user("Jeanette");
party_component *user_3 = new user("Hongan");
```

By calling ```m_party_1->print()```, the composite pattern should successfully display all of the party details.

```
Party Name: Party of 3
Party Size: 3
User 1: Xin
User 2: Jeanette
User 3: Hongan
```

###### 2c. Constructing the users and their respective carts
We had a bit of a difficulty implementing this without any redundancy as the terms users and party members are synonymous within this project. However, we were still able to utilize this in the way we originally intended. All ```users (container)``` will take in a ```party_component *``` as a parameter to recognize the user, and each user will have their individual ```cart items (leaves)``` which takes in a parameter of ```menu_component *``` to recognize the menu items. The ```cart component (interface)``` will manage the necessary operations to successfuly delegate work based on the parameter. The purpose of utilizing this composite function is for it to successfully recognize the individuality between different users and output their respective cart items based on the menu items they have selected. This composite pattern also successfuly provides a linkage to the previous two patterns. An example of how it is utilized in our client is:

```c++
menu_component *c_mcdonalds_test = new menu_mcdonalds("McDonalds Test", "\nDescription Test");
menu_component *test_1 = new menu_items_mcdonalds(1, "Test 1", "Description Test 1", 6);
menu_component *test_2 = new menu_items_mcdonalds(2, "Test 2", "Description Test 2", 4.30);
cart_component *cart_xin = new user_cart(user_xin);
cart_component *cart_items_xin = new cart_items(test_1);
cart_items_xin->add_to_cart(test_2);
```

By calling ```cart_xin->display()```, the composite pattern should successfully display all the menu items within this cart, the total price this person needs to pay with and without tax. Note that all taxes are calculated based on the city of Riverside, which is 8.75%.

```
Displaying Xin's Cart
---------------------------------
Item Number: 1
Item Name: Test 1
Item Description: Description Test 1
Item Price: 6

Item Number: 2
Item Name: Test 2
Item Description: Description Test 2
Item Price: 4.3

Price of Test 1 is: $6
Price of Test 2 is: $4.3

Total Cart Price is: $10.3
Total Cart Price (Including Tax): $11.2012
```

#### 3. Strategy
Incorporating the strategy design pattern would allow us to sort the restaurants based on the type and the name. 

## Phase II: OMT Diagrams
#### Restaurant Prototype Pattern
![Restaurant_Prototype](prototype/prototype_pattern.png)

As stated before, the use of this pattern allows for the clonining of different Restaurant categories. This allows for the client to easily copy any object that follows such prototype interface. The "Concrete Prototypes" will be the different categories of Fast Food places such as burgers, pizzas, and tacos. The way it is utilized through is demonstrated below:

```c++
FastFood *Create(const string &fastfood_store_name, const string &fastfood_store_price, string_view fastfood_type)
{
    if (fastfood_type == "Burger")
    {
        return new Burger(fastfood_store_name);
    }
    else if (fastfood_type == "Taco")
    {
        return new Taco(fastfood_store_name);
    }
    else if (fastfood_type == "Pizza")
    {
        return new Pizza(fastfood_store_name);
    }
    return nullptr;
}
```
Based on the type of fast food category we want to implement, ```FastFood *Create(...)``` will return a new instance of the selected restaurant. The client interface is now displayed below:

```c++
    m_Burger.push_back(Create("McDonald's", "$", "Burger"));
    m_Burger.at(0)->set_fastfood_store_price("$");
    
    auto ChickFilA = m_Burger[0]->clone();
    ChickFilA->set_fastfood_store_name("Chick-Fil-A");
    ChickFilA->set_fastfood_store_price("$$");
    m_Burger.push_back(ChickFilA);

    auto InNOut = m_Burger[0]->clone();
    InNOut->set_fastfood_store_name("In-N-Out");
    InNOut->set_fastfood_store_price("$");
    m_Burger.push_back(InNOut);
```

This would yield an output of:

```
Burger Places
===============
1. Restaurant Name: McDonald's
Restaurant Category: Fast Food
Restaurant Price (from $ to $$$): $

2. Restaurant Name: Chick-Fil-A
Restaurant Category: Fast Food
Restaurant Price (from $ to $$$): $$

3. Restaurant Name: In-N-Out
Restaurant Category: Fast Food
Restaurant Price (from $ to $$$): $
```

As displayed above, the usage of this pattern makes the process of creating new types of restaurants significantly more efficient. As each category: burger, pizzas, and tacos contain a distinctive vector to store its information. Constructing new restaurants is as simple as cloning it from the previous restaurant and then setting the proper name and price for the new restaurant. 
	
#### Composite Patterns

###### Menu & Menu Items Composite Pattern
![Menu_Composite1](composite/menu_composite_pattern.png)
> The OMT Disgram above only demonstrates one of the many restaurants that utilize the ```menu_component``` base class. All the other restaurants we have chose to implement also comprises of a respective component class and leaf class that replicates a similar OMT diagram. Such files can be found under ```composite/menu_burger/...```, ```composite/menu_pizza/...```, and ```composite/menu_taco/...```

For each restaurant, we added around 9-10 of their top 10 items. These can be found under ```interface/```, an example will be displayed below:

```c++
class menu_deltacos_display
{
public:
    void display_deltacos_customer_favorites()
    {
        menu_component *deltacos_menu_customer_favorites = new menu_deltaco("Del Taco's Menu, Customer Favorites", "Following Options are the Most Popular Items at Del Taco");
        // THE DEL TACO
        menu_component *the_del_taco = new menu_items_deltaco(1, "The Del Taco", "The Del Taco is inspired by the original and loaded with more of everything you love, like more seasoned beef and more hand-grated cheddar cheese, plus crisp lettuce and chopped fresh tomatoes in a crunchy corn shell or warm flour tortilla.", 1.69);
        // BEYOND TACO
        menu_component *beyond_taco = new menu_items_deltaco(2, "Beyond Taco", "Layered with 100% plant-based Beyond Meat®, hand-grated cheddar cheese, crisp lettuce, and fresh diced tomatoes in a crunchy corn shell or soft flour tortilla.", 2.49);
        //AL CARBON TACO
        menu_component *al_carbon_taco = new menu_items_deltaco(3, "Al Carbon Taco", "Your choice of freshly grilled carne asada or freshly grilled marinated chicken, topped with diced onions, fresh cilantro, and drizzled with tangy green sauce, wrapped in two warm corn tortillas.", 1.00);
        // BEER BATTERED FISH TACO
        menu_component *beer_battered_fish_taco = new menu_items_deltaco(4, "Beer Battered Fish Taco", "Hand-cut Alaska Pollock fillet in a crispy beer batter, topped with crunchy cabbage, savory secret sauce, and handmade pico de gallo, wrapped in two warm corn tortillas and served with a fresh-cut lime wedge.", 2.89);
        //EPIC CALI BACON BURRITO
        menu_component *epic_cali_bacon_burrito = new menu_items_deltaco(5, "Epic Cali Bacon Burrito", "The Epic Cali Bacon Burrito combines all your favorite loaded baked potato flavors. We layer freshly grilled chicken, carne asada, or Beyond meat, Del Taco's famous Crinkle-Cut Fries, tangy chipotle sauce, crisp bacon, freshly grated cheddar cheese and cool sour cream.", 5.69);
        //EPIC ORIGINAL MEX BURRITO
        menu_component *epic_original_mex_burrito = new menu_items_deltaco(6, "Epic Original Mex Burrito", "This Epic Burrito is loaded with fresh grilled carne asada steak, chicken or Beyond Meat, slow-cooked beans made from scratch, fresca lime rice, fresh guacamole, and handmade pico de gallo salsa, all in a warm, oversized flour tortilla.", 5.49);
        //EPIC LOADED QUESO BURRITO
        menu_component *epic_loaded_queso_burrito = new menu_items_deltaco(7, "Epic Loaded Queso Burrito", "This Epic Burrito is loaded with fresh grilled chicken, carne asada steak or Beyond Meat, Del Taco’s famous Crinkle-Cut Fries, creamy Queso Blanco, hand-grated cheddar cheese, and handmade pico de gallo, wrapped in a warm oversized flour tortilla. A Cali burrito with epic queso flavor.", 5.29);
        //EPIC FRESH AVOCADO BURRITO
        menu_component *epic_fresh_avocado_burrito = new menu_items_deltaco(8, "Epic Fresh Avocado Burrito", "This Epic Burrito is loaded with fresh grilled carne asada steak, chicken or Beyond Meat, hand-sliced avocado, handmade pico de gallo, salsa casera, fresca lime rice, and seasoned black beans all in a warm, oversized flour tortilla. Made with fresh, premium ingredients for an Epic burrito experience.", 5.69);
        //QUESO LOADED NACHOS
        menu_component *queso_loaded_nachos = new menu_items_deltaco(9, "Queso Loaded Nachos", "Piled high and loaded with your choice of seasoned beef, fresh grilled chicken, or fresh grilled carne asada steak, house-made chips, slow-cooked beans made from scratch, and creamy Queso Blanco, all topped with sour cream, fresh diced tomatoes, and sliced jalapenos.", 3.99);
        //CHIPS AND QUESO
        menu_component *chips_and_queso = new menu_items_deltaco(10, "Chips & Queso", "Creamy Queso Blanco served with a large bag of fresh, house-made tortilla chips. Great for sharing!", 3.29);

        deltacos_menu_customer_favorites->add(the_del_taco);

        deltacos_menu_customer_favorites->add(beyond_taco);
        deltacos_menu_customer_favorites->add(al_carbon_taco);
        deltacos_menu_customer_favorites->add(beer_battered_fish_taco);
        deltacos_menu_customer_favorites->add(epic_cali_bacon_burrito);
        deltacos_menu_customer_favorites->add(epic_original_mex_burrito);

        deltacos_menu_customer_favorites->add(epic_loaded_queso_burrito);
        deltacos_menu_customer_favorites->add(epic_fresh_avocado_burrito);
        deltacos_menu_customer_favorites->add(queso_loaded_nachos);
        deltacos_menu_customer_favorites->add(chips_and_queso);

        deltacos_menu_customer_favorites->print();
    }
};
```

This is then utilized within our ```main.cpp``` (command line executable) as shown below:

```c++
string display_burger_places()
{
    cout << "\nBurger Places\n===============" << endl;
    FastFood_Client i_burger_places;
    i_burger_places.fastfood_burger_run();
    cout << endl;

    cout << "Choose a selection from the above restaurants!" << endl;

    int choice = 0;
    cin >> choice;
    int burger_choice = 0;
    string restaurant_name = "";
    if (choice == 1)
    {
        menu_mcdonalds_display i_mcdonalds;
        i_mcdonalds.display_mcdonalds_customer_favorites();
        restaurant_name = "McDonalds";
        return restaurant_name;
    }
    ...
```

###### Party & Party Members Composite Pattern
![Party_Composite](composite/party_composite_pattern.png)

###### User & User Carts Composite Pattern
![Cart_Composite](composite/cart_composite_pattern.png)



#### Sort Strategy Pattern
- RestaurantSort Strategy pattern, can let us to corresponding to sorting algorithm operation of the restaurant, such as the restaurant according to the price of ordering (from the highest price to the restaurant to the cheapest to the restaurant）, the restaurant can also be sorted in alphabetical order (from A to Z or from A to Z), algorithm can also be in accordance with the type of restaurant to restaurant for sorting (western food, Mexican food, Chinese food, etc.).
	
![Sort Strategy](https://user-images.githubusercontent.com/58233764/99926181-a44c3700-2cf5-11eb-889b-36309dfe1711.png)

	
## Phase III: Development, Testing, and Scrum Meeting
###### Meeting with Philip Park - Monday, November 23 (11:00am - 2:00pm)
	

## Final deliverable
 > All group members will give a demo to the TA during lab time. The TA will check the demo and the project GitHub repository and ask a few questions to all the team members. 
 > Before the demo, you should do the following:
 > * Complete the sections below (i.e. Screenshots, Installation/Usage, Testing)
 > * Plan one more sprint (that you will not necessarily complete before the end of the quarter). Your In-progress and In-testing columns should be empty (you are not doing more work currently) but your TODO column should have a full sprint plan in it as you have done before. This should include any known bugs (there should be some) or new features you would like to add. These should appear as issues/cards on your Kanban board. 
 ## Screenshots
 > Screenshots of the input/output after running your application
 ## Installation/Usage
 > Instructions on installing and running your application
 ## Testing
 > How was your project tested/validated? If you used CI, you should have a "build passing" badge in this README.
