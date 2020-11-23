# SPLICE
 > **Authors**: [**Xin Wang**](https://github.com/xinwng), [**Jeanette Oh**](https://github.com/jeanetteoh), [**Hongan Zhang**](https://github.com/hongan-z)

# Project Description:
## Phase 1
### 1. Why is this project interesting to us?
> * SPLICE is a way of simplifying everyday experiences. Our group holds the idea of efficiency and convenience to a high level so we wanted to create an easy to use application that simplifies splitting the check with friends or family. It has always been an inconvenience to do the math and figure out who needs to pay what when going out, and using multiple cards is not always an option. SPLICE allows a simple way of denoting what was ordered, by who, and how much they need to pay. 
> * SPLICE will have many useful prospects. Not only is SPLICE a tool for splitting bills amongst friends, this project will also allow us to acknowledge trending food preferences from specific restaurants. It can also be utilized as a tool to track food pricing changes over the course of a certain period of time. Under this notion, SPLICE is a tool that can provide insight into a user’s spending habits as well as food preferences. 
### 2. What languages/tools/technologies do we plan to use?
> * At this moment, we intend to implement SPLICE through C++, as well as pushing it onto GitHub over a time period. In addition, we will utilize Valgrind with its extensive toolkit, we will use the Memcheck tool to detect memory-management problems for SPLICE projects, as our project is developed with C++. Testing is a very important part of the software development process, and thus we will be incorporating the fairly standard Google Unit Test Framework (gtest) for our project in pursuance of holding it to a standard of quality.
### 3. What will be the input/output for our project?
> * The inputs to our project will be the restaurant, the total amount, the number of consumers, and the specific items each consumer purchased. The output of SPLICE will be the amount each consumer needs to pay after the bill is split. In addition, we intend on incorporating subjacent features that are related to the user, such as the total amount of money spent over the course of a year, details of monthly consumption, and etc. It is also possible that we output certain data regarding each transaction at a restaurant. For instance, with “burger” as the keyword, the amount of hamburgers that have been purchased in total will display.
### 4. What design patterns will we be incorporating?
#### Prototype
> * Incorporating the prototype design pattern within our project would entail creating multiple new categories of restaurants that we can clone the template from. It would allow us to create copies of existing objects, and also modify it to our needs. As we are going to include numerous different categories of restaurant chains, cloning each object would be more efficient and less expensive as opposed to creating new objects. 
#### Composite
> * Incorporating the composite design pattern would allow us to treat individual objects in an uniformed manner. For example, a total bill will have a specified amount of people and number of items they purchased and the composite design pattern will allow us to use those variables/data in the same manner for different restaurants. In addition, this can also be applied in our project in other instances such as specific menu items and the tax amount allocated with it.
#### Strategy
> * Incorporating the strategy design pattern would allow us to use the individual objects, which in this case would be the amount from a specific individual, and use the same algorithm to get the individual's total amount. As tax is distributed based on the percentage of the total bill, we can use the strategy method and create a function that generates the tax from an individual and adds it to the amount ordered. In addition, the strategy pattern could also be used when we have individuals who split an item and depending on the amount of people that split the item we can generate that total to their specified amounts. 
> * The strategic strategy is the functions that allows us to implement user management. Consumer information can be added and removed in this module, and a record can be formed.Consumption information at different restaurants is also printed out and retained as data information.Each purchase, where and the list of consumers can be displayed in this module.

## Phase II
## Class Diagrams
### User Strategy Pattern
- RestaurantSort Strategy pattern, can let us to corresponding to sorting algorithm operation of the restaurant, such as the restaurant according to the price of ordering (from the highest price to the restaurant to the cheapest to the restaurant）, the restaurant can also be sorted in alphabetical order (from A to Z or from A to Z), algorithm can also be in accordance with the type of restaurant to restaurant for sorting (western food, Mexican food, Chinese food, etc.).
	
![Sort Strategy](https://user-images.githubusercontent.com/58233764/99926181-a44c3700-2cf5-11eb-889b-36309dfe1711.png)
	
### Party Composite Pattern
- With the component being the Party containing the masterCart vector (all the food items), the OrganizeParty Composite objects provide the ability to add and remove Party(s), while the PartyMember Leaf Object stores all party members and will add, delete, and modify party members
	
![composite](https://user-images.githubusercontent.com/32968430/99349756-9ad45200-2851-11eb-9307-71cc82ca09e9.png)

### Restaurant Protype Patten
- The Restaurant protype allows for the cloning of objects of menu items. This allows us to clone objects of a specific restaurant type into a user cart. This prototype is used by having the user input an item in which, the class type denotes where to recieve the data and thus clones it for usage.
	
![Restaurant Prototype](https://user-images.githubusercontent.com/58233764/99925664-d0ff4f00-2cf3-11eb-9144-6c6e85ba330f.png)
	
## Phase III
 > You will need to schedule a check-in with the TA (during lab hours or office hours). Your entire team must be present. 
 > * Before the meeting you should perform a sprint plan like you did in Phase II
 > * In the meeting with your TA you will discuss: 
 >   - How effective your last sprint was (each member should talk about what they did)
 >   - Any tasks that did not get completed last sprint, and how you took them into consideration for this sprint
 >   - Any bugs you've identified and created issues for during the sprint. Do you plan on fixing them in the next sprint or are they lower priority?
 >   - What tasks you are planning for this next sprint.

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
