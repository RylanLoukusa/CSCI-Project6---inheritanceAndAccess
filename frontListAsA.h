/**                                                                                                                                                                                                        
 * @Description: THis is the header file for the frontListAsA class. We are using the linkedList class to form this class.                                                                                                                                                                                           \
                                                                                                                                                                                                            
 * @Name: Rylan Loukusa                                                                                                                                                                                    
 * @StadID: sq3572nq                                                                                                                                                                                       
 * @Due Date: Sunday March 26th                                                                                                                                                                            
 * @Instructor: Dr. Jie Hu Meichsner                                                                                                                                                                       
 */

#ifndef _SORTED_LIST_AS_A
#define _SORTED_LIST_AS_A

#include "frontListInterface.h"
#include "linkedList.h"
#include "node.h"
#include "precondViolatedExcep.h"
#include <string>

template<class ItemType>
class frontListAsA : public frontListInterface<ItemType>, private LinkedList<ItemType>
{
 public:
  frontListAsA();
  frontListAsA(const frontListAsA<ItemType>& sList);
  virtual ~frontListAsA();

  bool insert(const ItemType& newEntry);
  bool remove();
  ItemType retrieve() const;

  //The following methods are inherited and have the same 
  // specifications as given in ListInterface:                 
  bool isEmpty() const;
  int getLength() const;
  bool remove(int position);
  void clear();
  ItemType getEntry(int position) const throw(PrecondViolatedExcep);  

};
#include "frontListAsA.cpp"
#endif
