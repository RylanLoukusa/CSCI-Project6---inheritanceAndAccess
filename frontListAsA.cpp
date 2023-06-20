/**                                                                                                                                                                                                        
 * @Description: This is the implementation file for the frontListAsA class which is using the linkedList class.                                                                                                                                                                                                          
 * @Name: Rylan Loukusa                                                                                                                                                                                    
 * @StadID: sq3572nq                                                                                                                                                                                       
 * @Due Date: Sunday March 26th                                                                                                                                                                            
 * @Instructor: Dr. Jie Hu Meichsner                                                                                                                                                                       
 */
#include "frontListAsA.h"
#include <cassert>
#include <cmath>
#include <string>

template<class ItemType>
frontListAsA<ItemType>::frontListAsA()
{
}//end default constructor

template<class ItemType>
frontListAsA<ItemType>::frontListAsA(const frontListAsA<ItemType>& sList) : LinkedList<ItemType>(sList)
{
}//end copy constructor

template<class ItemType>
frontListAsA<ItemType>::~frontListAsA()
{
  clear();
}//end destructor

template<class ItemType>
bool frontListAsA<ItemType>::insert(const ItemType& newEntry)
{
  int newPosition = fabs(1);
  this->insert(newEntry);
}//end insert

template<class ItemType>
bool frontListAsA<ItemType>::remove()
{
  return LinkedList<ItemType>::remove(1);
}//end remove

template<class ItemType>
ItemType frontListAsA<ItemType>::retrieve() const
{
  return LinkedList<ItemType>::getEntry(1);
}//end retrieve

template<class ItemType>
void frontListAsA<ItemType>::clear()
{
  LinkedList<ItemType>::clear();
}

template<class ItemType>
bool frontListAsA<ItemType>::isEmpty() const
{
  return LinkedList<ItemType>::isEmpty();
}  // end isEmpty

template<class ItemType>
int frontListAsA<ItemType>::getLength() const
{
  return LinkedList<ItemType>::getLength();
}  // end getLength

template<class ItemType>
bool frontListAsA<ItemType>::remove(int position)
{
  return LinkedList<ItemType>::remove(1);
}

template<class ItemType>
ItemType frontListAsA<ItemType>::getEntry(int position) const throw(PrecondViolatedExcep)
{
  return LinkedList<ItemType>::getEntry(1);
}


