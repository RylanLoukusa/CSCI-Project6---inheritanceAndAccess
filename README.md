# inheritanceAndAccess
Project6 - CSCI 301

These programs are showing the differences between inheritance and access. 
We start with the LinkedList class and build off it. For the first program we did a private base class or an as-a class. 
For the second program we did a protected base class of a has-a class. 
For the third program we did a public base class of a is-a class.

To compile and link it simply enter:

g++ (filename)

To run the program simply enter:

./a.out

scriptRun.txt:

g++ mainFrontIsA.cpp

./a.out
 
Adding zero
Adding one
Adding two
Adding three
Adding four
Adding five
The list contains 
five four three two one zero 

Copy of list: The list contains 
five four three two one zero 

The copied list: The list contains 
five four three two one zero 

Testing the Link-Based front List:

Test isEmpty with an empty list:
OK
List should contain
Brent, Donna, Jerry, Luke, Sue, Tom

List actually contains:
The list contains 
Jerry Sue Tom Donna Brent Luke 



Test getLength and getEntry:


List has 6 entries, as follows:

1: Jerry
2: Sue
3: Tom
4: Donna
5: Brent
6: Luke

Test retrieve and remove: 

Retrieving first item: Jerry; should be Jerry

Removing first item (Jerry): 1; should be 1 (true)

After removing Jerry, list contains 5 items, as follows:
The list contains 
Sue Tom Donna Brent Luke 


Removing first item (Sue): 1; should be 1 (true)

After removing Sue, list contains 4 items, as follows:
The list contains 
Tom Donna Brent Luke 


Retrieving first item: Tom; should be Tom

Test clear():


The list is empty after invoking clear().
======================================

Testing the List Operations:
The list contains 
Jerry Sue Tom Donna Brent Luke 

