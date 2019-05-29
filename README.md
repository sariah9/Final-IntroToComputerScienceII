# FinalProject
my very own game design and implementation

My design is based loosely on a game called Tripletown. This is a cell phone game that 
I got hooked on around the time that I met my husband. Therefore, it has sentimental value 
for me, but it's also a simple game with straightforward rules. In Tripletown, you are 
building a town by placing an item on the board each turn. If you place a bush beside two 
other bushes (either adjacent or diagonally), the 3 bushes turn into a tree. Three or more 
trees make a school, three schools make a house, and three houses make a mansion. You can also make castles by three bears turning into a grave, three graves becoming a church, and three churches becoming a castle. This game relies on the fact that the user will receive a random item each turn and that there are limited spaces on the board. Thus, if you don't plan properly you might end up with a board full of odds and ends that can't make a triple. 
In my game, I want to use the idea of three items in a grid making another, 'better' item. I 
hope to make a grid of 12 by 12 and print this game each turn. However, because I want more 
user interaction with the space, I want to only print 9 spaces each turn and have the user 
determine the best outcome for themselves based only on what they can see and the items in 
their 'knapsack'. 
The theme of my game is a loot and shoot with a set map that the user can only see as he moves through the spaces. The ultimate goal of the game is to collect enough items to make three battleships or a fleet. Then the user will have an army to conquer the sea. The 'loot' aspect 
comes in the form of the user receiving a random item each move. He can either choose to keep this item in his sack (which only holds 6 items) or drop the item along the way. Either has an advantage. If the user keeps the item, he may be able to collect enough of the same item to 
make a better item. If the user drops the item, it may make a better item if it matches two other 
adjacent or diagonal items already on the grid. Then the user can collect this new item. The 
'shoot' aspect of the game comes in the form of feeding bears salmon. There will be bears 
randomly populating the grid at the start of the game. They want to eat the user, but if the 
user feeds them a tasty salmon, they won't harm him.    
My game will begin with the lower right corner of 9 spaces (the user is in 
the middle of these) being shown. These 9 spaces will be populated with karps, boats, 
empty spaces, and a bear or two. The user will start with 6 items in their 'knapsack.'
These items will be a karp, two boats, two salmon, and a flashlight. If there is a bear in the 
immediate vicinity (within the 3x3 spaces of the user), the user must deal with this first, or 
the bear will eat them. They must either give the bears a salmon or choose to move in a certain 
direction to try and escape the bears. If a user collects 3 salmon, they will be immune from 
bears the rest of the game. It is strategic to try to get this first, because the game will 
become much easier after that. However, the player then runs the risk of being attacked in the 
time it takes them to collect 3 salmon. They also may waste precious container space.
 	As gameplay continues, it is the objective of the user to collect 3 karp to make a boat, three boats to make a battleship (9 karp), and three battleships to make a fleet and win the game (or 9 boats or 27 karp). If they cannot perform this by the time they reach the end of the grid (in 15 moves), the game is over and they lose. If they are eaten, that also ends the game. The random items that will be offered are karp, boats, salmon, and flashlights. Flashlights will 
allow the user to see a 25 space grid around where they are. This is advantageous in order to 
see where bears and possible matches for sack items are. The amount of items on the board will be skewed according to level. Obviously, the most popular item on the grid will be karp. There will be one battleship at the most upper left corner of the grid. While the user can choose 
which direction to move on some spots, the majority of the game will be guided so that all 
spaces are hit by the user, and the last space will always be the upper left corner.

Final Project
A Text-based Game

Goals

Design a game with pointer-linked spaces
Use object-oriented programming concepts
 

Requirements 

This is the final project and you will be able to design and implement a one-player, text-based game where the player can move through spaces to get items and accomplish goals.

You have the freedom to decide what kind of them you would like to create for your game as long the requirements below are met.

 

Space class

The game requires a Space class, which represents the space the player can be in. The Space class must be an abstract class that will have pure virtual functions (you can add not pure virtual functions, too).
Inside the Space class, there must be at least 4 Space pointers: top, right, left, and bottom.

Use the class to create a game with the structure of linked space. (You are free to add more Space pointers to the Space class, but must have at least 4 Space pointers)

 

Note:

Even if your structure is linear, such as a train, you still have at least 4 pointers in the Space class
Any unused pointers need to point to NULL.
 

The game must have at least 3 derived classes that are derived from the Space
Each representing a different type of space, and need to have a special action for the player to interact with. It can be opening the door to another space, or maybe attack the monster, or turn on the light switch, or sing a song to please the king.

 

The game must have at least 6 spaces.
 

Gameplay

The game must have a theme. It can be a crime-solving theme, a fantasy game. The game must also have a goal for the player, so the player can complete the goal to achieve victory.
The game must keep track of which space the player is in. It can be in a form of visualized space, by printing the map out and indicate where the player is, or printing text describing where the player is at and what adjacent space is around the player’s space.
You must create a container for the player, to carry “items”. The container must have a capacity limit. The game must contain some items for the player to obtain in the game and one or more of these items must be required as part of the solution to accomplish game’s goal, such as a key to open a locked door, etc.
The game must have a time limit, which limits the amount of time/steps/turn the user can take before losing the game. The following are some notable examples of the time limit:
Step limit that limits the number of times the user can switch spaces.
Health system which decreases the player’s health point from space to space, and maybe some painkillers scattered around the spaces.
Note: make sure you give enough steps to allow the game to perform testing.

Again, the user must be able to interact with parts of the space structure, not just collecting items to complete the game.
 

Interface

At the beginning of the game, the goal of the game must be declared and printed to let the player know the goal of the game.
The game cannot contain free-form input. An example of free-form input would be to type out “kitchen” to go to the kitchen space in the game. It is tedious and counter-intuitive.
The game must provide the user a menu option for each scenario of the game.
You are not required to have a printed map to visualize space, a text-based game is sufficient. But, it would be great to have a printed map, it is easier to interact with, and it’s cool to show a cool game with a map to friends and family.
 

Extra Credit

Best theme +10%: the graders will have the option to give extra credit for the most creative, interesting and well-designed games in the class.

 

What you need to Submit

All the program files including header and source files (.cpp/.hpp)
makefile
Your reflection pdf file
Important: Put all the files in a single .zip file and submit it on Canvas.

 

GRADING

Programming style and documentation 10% :
The program runs smoothly as intended on the flip, no segmentation fault, no memory leak, all files are put into a zip file, the code is well-commented.
Create basic game structure 50%:
Create at least 6 spaces of at least 3 different types (the abstract and derived classes): 20%
Correctly use at least 4 pointers for each space to link them together: 10%
Implement a goal for the player to achieve (sequence of actions to win and exit): 10%
Keep track of player status: 10%
Meet the advanced requirement 20%:
Properly implement the step limit: 10%
Properly implement the interaction of player and space structures: 10%
Create a menu function to run the game: 10%
Reflection document 10%: include the design description, test plan and results, comments about how you solved the problems
