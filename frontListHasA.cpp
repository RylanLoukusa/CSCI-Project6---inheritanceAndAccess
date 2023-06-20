/**                                                                                                                                                                                                        
 * @Description: This is the implementation file for the frontListHasA class.                                                                                                                                                                                           \
                                                                                                                                                                                                            
 * @Name: Rylan Loukusa                                                                                                                                                                                    
 * @StadID: sq3572nq                                                                                                                                                                                       
 * @Due Date: Sunday March 26th                                                                                                                                                                            
 * @Instructor: Dr. Jie Hu Meichsner                                                                                                                                                                       
 */


#include "linkedList.h"
#include "frontListHasA.h"
#include <cassert>
#include <cmath>

template<class ItemType>
frontListHasA<ItemType>::frontListHasA()
{
  listPtr = new LinkedList<ItemType>();
}//end default constructor

template<class ItemType>
frontListHasA<ItemType>::frontListHasA(const frontListHasA<ItemType>& sList)
{
  //First, create out own list
  listPtr = new LinkedList<ItemType>();

  //Then add items to it using public methods
  for(int position = 1; position <= sList.getLength(); position++)
    {
      listPtr->insert(1, sList.getEntry(position));
    }//end for	      
}//end copy constructor

template<class ItemType>
frontListHasA<ItemType>::~frontListHasA()
{
 listPtr-> clear();
}//end destructor

template<class ItemType>
bool frontListHasA<ItemType>::insert(const ItemType& newEntry)
{
  listPtr->insert(1, newEntry);
}//end insert

template<class ItemType>
bool frontListHasA<ItemType>::remove()
{
  if(!isEmpty())
    return listPtr->remove(1);
  return false;
}//end remove

template<class ItemType>
ItemType frontListHasA<ItemType>::retrieve() const
{
  return listPtr->getEntry(1);
}//end retrieve

template<class ItemType>
bool frontListHasA<ItemType>::isEmpty() const
{
  return listPtr->isEmpty();
}  // end isEmpty

template<class ItemType>
int frontListHasA<ItemType>::getLength() const
{
  return listPtr->getLength();
}  // end getLength

//  End of implementation file.

template<class ItemType>
ItemType frontListHasA<ItemType>::getEntry(int position) const throw(PrecondViolatedExcep)
{
  return listPtr->getEntry(1);
}
