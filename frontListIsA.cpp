/**                                                                                                                                                                                                        
 * @Description: This is the implementation file for the frontListIsA class.                                                                                                                                                                                           \
                                                                                                                                                                                                            
 * @Name: Rylan Loukusa                                                                                                                                                                                    
 * @StadID: sq3572nq                                                                                                                                                                                       
 * @Due Date: Sunday March 26th                                                                                                                                                                            
 * @Instructor: Dr. Jie Hu Meichsner                                                                                                                                                                       
 */

#include "frontListIsA.h"
#include <cassert>
#include <cmath>

template<class ItemType>
frontListIsA<ItemType>::frontListIsA()
{
}//end frontListIsA

template<class ItemType>
frontListIsA<ItemType>::frontListIsA(const frontListIsA<ItemType>& sList) : LinkedList<ItemType>(sList)
{
}//end copy constructor

template<class ItemType>
frontListIsA<ItemType>::~frontListIsA()
{
}//end destructor

template<class ItemType>
void frontListIsA<ItemType>::insert(const ItemType& newEntry)
{
  LinkedList<ItemType>::insert(1, newEntry);
}//end insert

template<class ItemType>
bool frontListIsA<ItemType>::remove()
{
  if(!LinkedList<ItemType>::isEmpty())
    return LinkedList<ItemType>::remove(1);
  return false;
}//end remove

template<class ItemType>
ItemType frontListIsA<ItemType>::retrieve() const
{
  return LinkedList<ItemType>::getEntry(1);
}//end retrieve

template<class ItemType>
bool frontListIsA<ItemType>::insert(int newPosition, const ItemType &newEntry)
{
  return false;
}

template<class ItemType>
bool frontListIsA<ItemType>::remove(int position)
{
  return false;
}
template<class ItemType>
ItemType frontListIsA<ItemType>::replace(int position, const ItemType& newEntry) throw(PrecondViolatedExcep)
{
  throw PrecondViolatedExcep("Cannot do this!");
}

template<class ItemType>
void frontListIsA<ItemType>::clear()
{
  while(!LinkedList<ItemType>::isEmpty())
    {
      LinkedList<ItemType>::remove(1);
    }
}
