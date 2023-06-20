/**                                                                                                                                                                                                        
 * @Description: This is the frontListIsA header file that is a linkedList                                                                                                                                                                                           \
                                                                                                                                                                                                            
 * @Name: Rylan Loukusa                                                                                                                                                                                    
 * @StadID: sq3572nq                                                                                                                                                                                       
 * @Due Date: Sunday March 26th                                                                                                                                                                            
 * @Instructor: Dr. Jie Hu Meichsner                                                                                                                                                                       
 */

#ifndef _FRONT_LIST_IS_A
#define _FRONT_LIST_IS_A

#include "linkedList.h"
#include "node.h"
#include "precondViolatedExcep.h"

template<class ItemType>
class frontListIsA : public LinkedList<ItemType>
{
 public:
  frontListIsA();
  frontListIsA(const frontListIsA<ItemType>& sList);
  virtual ~frontListIsA();

  void insert(const ItemType& newEntry);
  bool remove();
  ItemType retrieve() const;

  //The following methods must be overridden to disable their effect on a sorted list:
  bool insert(int newPosition, const ItemType& newEntry);
  bool remove(int position);
  ItemType replace(int position, const ItemType& newEntry) throw(PrecondViolatedExcep);
  void clear();
};//end frontListIsA.h
#include "frontListIsA.cpp"
#endif
