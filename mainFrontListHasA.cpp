//Rylan Loukusa
#include <iostream>
#include <string>
#include "frontListHasA.h"
using namespace std;
void displayList(frontListInterface<string>* listPtr)
{
  cout << "The list contains " << endl;
  for(int pos = 1;pos <= listPtr->getLength(); pos++)
    {
      cout << listPtr->getEntry(pos) << " ";	
    }
  cout << endl << endl;
}//end displayList

void copyConstructorTester()
{
  frontListHasA<string> list;string items[] = {"zero", "one", "two", "three", "four", "five" };
  for (int i = 0; i < 6; i++)
    {
      cout << "Adding " << items[i] << endl;
      list.insert(items[i]);
    }
  displayList(&list);
  frontListHasA<string> copyOfList(list);
  cout << "Copy of list: ";
  displayList(&copyOfList);

  cout << "The copied list: ";
  displayList(&list);
}//end copyConstructorTester

void frontListTester(frontListInterface<std::string>* listPtr)
{
  string luke = "Luke";
  string brent = "Brent";
  string donna = "Donna";
  string tom = "Tom";
  string sue = "Sue";
  string jerry = "Jerry";

  cout << "\nTest isEmpty with an empty list:" << endl;
  if (listPtr->isEmpty())
    cout << "OK" << endl;
  else
    cout << "isEmpty() error" << endl;
  
  listPtr->insert(luke);
  listPtr->insert(brent);
  listPtr->insert(donna);
  listPtr->insert(tom);
  listPtr->insert(sue);
  listPtr->insert(jerry);
   
  // display the list
  cout << "List should contain\nBrent, Donna, " <<
    "Jerry, Luke, Sue, Tom" << endl;
  cout << "\nList actually contains:" << endl;
  displayList(listPtr);
  cout << endl;
  // test getLength and getEntry
  cout << "\nTest getLength and getEntry:\n" << endl;
   
  cout << "\nList has " << listPtr->getLength() << " entries, as follows:\n" << endl;
  for (int i = 1; i <= listPtr->getLength(); i++)
    cout << i << ": " << listPtr->getEntry(i) << endl;
   
  //tesst remove and retrieve
  string name;
  cout << "\nTest retrieve and remove: " << endl;

  //Retrieve first entry
  name = listPtr -> retrieve();
  cout << "\nRetrieving first item: " << name << "; should be Jerry" << endl;

  //remove first entry
  cout << "\nRemoving first item (Jerry): " << listPtr->remove() << "; should be 1 (true)" << endl;
  cout << "\nAfter removing Jerry, list contains " << listPtr->getLength()
       << " items, as follows:" << endl;
  displayList(listPtr);

  //remove another entry
  cout << "\nRemoving first item (Sue): " << listPtr->remove() << "; should be 1 (true)" << endl;
  cout << "\nAfter removing Sue, list contains " << listPtr->getLength()
       << " items, as follows:" << endl;
  displayList(listPtr);

  //Retrieve first entry                                                        
  name = listPtr -> retrieve();
  cout << "\nRetrieving first item: " << name << "; should be Tom" <<endl;

  // test clear()
  cout << "\nTest clear():\n" << endl;
  listPtr->clear();

  if (listPtr->isEmpty())
    cout << "\nThe list is empty after invoking clear()." << endl;
  else
    cout << "\nclear() error" << endl;
} // end sortedListTester

void listOpsTester(frontListInterface<string>* listPtr)
{
  string luke = "Luke";
  string brent = "Brent";
  string donna = "Donna";
  string tom = "Tom";
  string sue = "Sue";
  string jerry = "Jerry";
   
  listPtr->insert(luke);
  listPtr->insert(brent);
  listPtr->insert(donna);
  listPtr->insert(tom);
  listPtr->insert(sue);
  listPtr->insert(jerry);
   
  displayList(listPtr);
  cout << "getEntry: returns" << listPtr->getEntry(1) <<"; should be Herry" << endl;
  cout <<"isEmpty: returns" << listPtr->isEmpty() <<"; should be a (false)" << endl;
  cout <<"getLength: returns" <<listPtr->getLength() <<"; should be 6" << endl;
  listPtr->clear();
  cout <<"isEmpty: returns" << listPtr->isEmpty() <<"; should be a (true)" << endl;

try
  {
    cout << "Attempt an illegal retrieval from position 6: " << endl;
    listPtr->getEntry(6);
  }
 catch(PrecondViolatedExcep e)
   {
     cout << e.what() << endl;
   }  // end try/catch
} // end listOpsTester

int main()
{
  copyConstructorTester();

  frontListInterface<string>* listPtr = new frontListHasA<string>();
  cout << "Testing the Link-Based front List:" << endl;
  frontListTester(listPtr);
  cout << "======================================" << endl;
   
  cout << "\nTesting the List Operations:" << endl;
  listOpsTester(listPtr);
  cout << "done testing!!"<<endl;

  return 0;
}  // end main
