/**                                                                                                                                                                                                        
 * @Description: This is the header file of the frontListHasA class which is a protected base class of the linked list class.                                                                                                                                                                                          \
                                                                                                                                                                                                            
 * @Name: Rylan Loukusa                                                                                                                                                                                    
 * @StadID: sq3572nq                                                                                                                                                                                       
 * @Due Date: Sunday March 26th                                                                                                                                                                            
 * @Instructor: Dr. Jie Hu Meichsner                                                                                                                                                                       
 */


#ifndef _FRONT_LIST_HAS_A
#define _FRONT_LIST_HAS_A

#include "frontListInterface.h"
#include "listInterface.h"
#include "node.h"
#include "precondViolatedExcep.h"

template<class ItemType>
class frontListHasA : public frontListInterface<ItemType>
{
 private:
  ListInterface<ItemType>* listPtr;
 public:
  frontListHasA();
  frontListHasA(const frontListHasA<ItemType>& sList);
  virtual ~frontListHasA();

  bool insert(const ItemType& newEntry);
  bool remove();
  ItemType retrieve() const;

  // The following methods have the same specifications
  // as given in ListInterface:

  bool isEmpty() const;
  int getLength() const;
  void clear();
  ItemType getEntry(int position) const throw(PrecondViolatedExcep);
}; //end frontListHasA.h

#include "frontListHasA.cpp"
#endif
