# SPLICE
 > **Authors**: [**Xin Wang**](https://github.com/xinwng), [**Jeanette Oh**](https://github.com/jeanetteoh), [**Hongan Zhang**](https://github.com/hongan-z)

# Project Description:
## Phase 1
### 1. Why is this project interesting to us?
> * SPLICE is a way of simplifying everyday experiences. Our group holds the idea of efficiency and convenience to a high level so we wanted to create an easy to use application that simplifies splitting the check with friends or family. It has always been an inconvenience to do the math and figure out who needs to pay what when going out, and using multiple cards is not always an option. SPLICE allows a simple way of denoted what was ordered, by who, and how much they need to pay. 
> * SPLICE will have many useful prospects. Not only is SPLICE a tool for splitting bills amongst friends, this project will also allow us to acknowledge trending food preferences from specific restaurants. It can also be utilized as a tool to track food pricing changes over the course of a certain period of time. Under this notion, SPLICE is a tool that can provide insight into a user’s spending habits as well as food preferences. 
### 2. What languages/tools/technologies do we plan to use?
> * At this moment, we intend to implement SPLICE through C++, as well as pushing it onto GitHub over a time period. In addition, we will utilize Valgrind with its extensive toolkit, we will use the Memcheck tool to detect memory-management problems for SPLICE projects, as our project is developed with C++. Testing is a very important part of the software development process, and thus we will be incorporating the fairly standard Google Unit Test Framework (gtest) for SPLICE project in pursuance of ensuring the quality of our project.
### 3. What will be the input/output for our project?
> * The inputs to our project will be the restaurant, the total amount, the number of consumers, and the specific items each consumer purchased. The output of SPLICE will be the amount each consumer needs to pay after the bill is split. In addition, we intend on incorporating subjacent features that are related to the user, such as the total amount of money spent over the course of a year, details of monthly consumption, and etc. It is also possible that we output certain data regarding each transaction at a restaurant. For instance, with “burger” as the keyword, the amount of hamburgers that have been purchased in total will display.
### 4. What design patterns will we be incorporating?
#### Prototype
> * Incorporating the prototype design pattern within our project would entail creating multiple new objects of “restaurants” that we can copy the template from. It would allow us to create copies of existing objects, and also modify it to our needs. As we are going to include numerous fast-food chains, cloning each object would be more efficient as opposed to creating new objects. 
#### Composite 
> * Incorporating the composite design pattern would allow us to treat individual objects in an uniformed manner. For example, a total bill will have a specified amount of people and number of items they purchased and the composite design pattern will allow us to use those variables/data in the same manner for different restaurants. In addition, this can also be applied in our project in other instances such as specific menu items and the tax amount allocated with it.
#### Strategy
> * Incorporating the strategy design pattern would allow us to use the individual objects, which in this case would be the amount from a specific individual, and use the same algorithm to get the individual's total amount. As tax is distributed based on the percentage of the total bill, we can use the strategy method and create a function that generates the tax from an individual and adds it to the amount ordered. In addition, the strategy pattern could also be used when we have individuals who split an item and depending on the amount of people that split the item we can generate that total to their specified amounts. 

## Phase II
 > In addition to completing the "Class Diagram" section below, you will need to 
 > * Set up your GitHub project board as a Kanban board for the project. It should have columns that map roughly to 
 >   * Backlog, TODO, In progress, In testing, Done
 >   * You can change these or add more if you'd like, but we should be able to identify at least these.
 > * There is no requirement for automation in the project board but feel free to explore those options.
 > * Create an "Epic" (note) for each feature and each design pattern and assign them to the appropriate team member. Place these in the `Backlog` column
 > * Complete your first *sprint planning* meeting to plan out the next 7 days of work.
 >   * Create smaller development tasks as issues and assign them to team members. Place these in the `Backlog` column.
 >   * These cards should represent roughly 7 days worth of development time for your team, taking you until your first meeting with the TA
## Class Diagram
 > Include a class diagram(s) for each design pattern and a description of the diagram(s). This should be in sufficient detail that another group could pick up the project this point and successfully complete it. Use proper OMT notation (as discussed in the course slides). You may combine multiple design patterns into one diagram if you'd like, but it needs to be clear which portion of the diagram represents which design pattern (either in the diagram or in the description). 
 
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
