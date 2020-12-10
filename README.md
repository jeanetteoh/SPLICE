# CS100 SPLICE PROJECT
> Authors: [*Xin Wang*](https://github.com/xinwng), [*Jeanette Oh*](https://github.com/jeanetteoh), [*Hongan Zhang*](https://github.com/hongan-z)

## Phase I: Project Description

**Why is this project interesting to us?**

SPLICE is a way of simplifying everyday experiences. Our group holds the idea of efficiency and convenience to a high level so we wanted to create an easy to use application that simplifies splitting the check with friends or family. It has always been an inconvenience to split a receipt and compute the intricate mathematics when trying to figure out which person needs to pay what amount. SPLICE attempts in providing a simpler way of denoting what was ordered, by who, and how much they need to pay.  

**What languages/tools/technologies do we plan to use?**

This project will be coded in C++. We understand that testing is an integral part of successfully compiling a project, therefore we will be incorporating the standard Google Unit Test Framework (gtest) in pursuance of holding our project in a higher standard of quality. In addition, by completing this project, we strive to learn the importance of teamwork through GitFlow - including branching, resolving merge conflicts, opening pull requests, discussing code, and deploying our project.

**What will be the input/output for our project?**

The inputs to our project will be the party name, party size, party member names, restaurant selection, and item selections from the menus that will be outputted. We will then create a unique cart for each party member, and the output of our project will be the exact amount each consumer needs to pay per their specific carts. 

**What design patterns will we be incorporating?**

##### 1. Prototype
Incorporating the prototype design pattern within our project would entail creating multiple new types of restaurants that we can clone the template from. It would allow us to create copies of existing objects, and also modify it to our needs. As we are going to include numerous different restaurants, cloning each object would be more efficient and less expensive as opposed to creating new objects. For the purpose of this project, there will be no APIs utilized, and therefore we have decided to only implement 9 fastfood restaurants that fall into 3 categories: burgers, pizzas, and tacos. 

##### 2. Composite
As the composite design pattern would allow us to treat individual objects in an uniformed manner. We have utilized this pattern for constructing the menu and its menu items, the parties and the party members, and lastly, linking the party members with their respective carts.

###### 1. Constructing the menu and the menu items for different restaurants
As all ```menus (container)``` contain different ```menu items (leaf)```, the ```menu component (interface)``` will provide common specific operations that will delegate the work to the respective location in the hierarchy. For example, when constructing the menu and its items, the ```menu_component``` should successfully recognize the difference between what is a menu versus what is a menu item in our client. 

```c++
menu_component *mcdonalds_menu_customer_favorites = new menu_mcdonalds("McDonald's Menu, Customer Favorites", "Following Options are the Most Popular Items at McDonald's");
menu_component *big_mac = new menu_items_mcdonalds(1, "Big Mac", "Mouthwatering perfection starts with two 100% pure beef patties and Big Mac sauce sandwiched between a sesame seed bun. It’s topped off with pickles, crisp shredded lettuce, finely chopped onion and American cheese.", 3.99);
```

###### 2. Constructing the parties and the party members
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

###### 3. Constructing the users and their respective carts
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

##### 3. Strategy
Incorporating the strategy design pattern would allow us to sort the restaurants based on the type and the name. 


## Phase II: OMT Diagrams
#### Restaurant Prototype Pattern
![Restaurant_Prototype](prototype/prototype_pattern.png)

As stated before, the Restaurant prototype allows for the clonining of different Restaurant categories. This allows for the client to easily copy any object that follows such prototype interface. The "Concrete Prototypes" will be the different categories of Fast Food places such as burgers, pizzas, and tacos. The way it is utilized through is demonstrated below:

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
Based on the type of fast food category we want to implement, ```FastFood *Create()``` will return a new instance of the selected restaurant. The client interface is now displayed below:

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

As displayed above, the usage of this pattern makes the process of creating new types of restaurants significantly more efficient. As each category burger, pizzas, and tacos contain a distinctive vector to store its information. Constructing new restaurants is as simple as cloning it from the previous restaurant and then setting the proper name and price for the new restaurant. 

#### Sort Strategy Pattern
- RestaurantSort Strategy pattern, can let us to corresponding to sorting algorithm operation of the restaurant, such as the restaurant according to the price of ordering (from the highest price to the restaurant to the cheapest to the restaurant）, the restaurant can also be sorted in alphabetical order (from A to Z or from A to Z), algorithm can also be in accordance with the type of restaurant to restaurant for sorting (western food, Mexican food, Chinese food, etc.).
	
![Sort Strategy](https://user-images.githubusercontent.com/58233764/99926181-a44c3700-2cf5-11eb-889b-36309dfe1711.png)
	
#### Menu Composite Pattern
- The Menu composite pattern will represent a part-whole hierarchy of how we intend to implement the items on the menu and the menus for different restaurants. MenuItem will be our leaf component, and Menu will be our composite component.

![Menu Composite](https://user-images.githubusercontent.com/58233764/100003031-50cffc80-2d7a-11eb-87c7-3b6d78d19a6b.png)

#### Restaurant Prototype Patten
- The Restaurant prototype allows for the clonining of different Restaurant categories. This allows for the client to easily copy any object that follows such prototype interface. The "Concrete Prototypes" will be the different categories of Fast Food places such as burgers, pizzas, and tacos. 
	
![Restaurant Prototype](https://user-images.githubusercontent.com/58233764/99926233-db224d00-2cf5-11eb-9a10-b08ccc626c2c.png)
	
## Phase III: Meeting with Philip Park - Monday, November 23 (11:00am - 2:00pm)
**How effective your last sprint was (each member should talk about what they did)**
> * Our sprint was not as successful as we had originally planned. During our meetings, most of the time were spent on explaining concepts and making sure everyone is on the right page. Not a lot of work was actually completed. 
	
**Any tasks that did not get completed last sprint, and how you took them into consideration for this sprint**
> * During the last sprint majority of our tasks were not finished but in progress. Since we are working as a team for this application we need to implement and work together to create a cohesive app. As we move further, we must communicate and look over one anothers code to ensure that nothing will conflict.
 	
**Any bugs you've identified and created issues for during the sprint. Do you plan on fixing them in the next sprint or are they lower priority?**
> * No bug has been identified so far. Only issue has been managing memory leaks.
 
**What tasks you are planning for this next sprint.**
> * Our next tasks will be to finish implementing our main three patterns and being able to use them with one another. In more specifics, retrieving data, debugging, making sure to include the correct files with one another, and testing.
	

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
