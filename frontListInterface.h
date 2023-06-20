/**                                                                                                                                                                                                        
 * @Description: This is the interface for the frontList class.                                                                                           \
                                                                                                                                                                                                            
 * @Name: Rylan Loukusa                                                                                                                                                                                    
 * @StadID: sq3572nq                                                                                                                                                                                       
 * @Due Date: Sunday March 26th                                                                                                                                                                            
 * @Instructor: Dr. Jie Hu Meichsner                                                                                                                                                                       
 */                                                                                                                                               

#ifndef _FRONT_LIST_INTERFACE
#define _FRONT_LIST_INTERFACE

template<class ItemType>
class frontListInterface
{
 public:
  /** Inserts an entry into the front of this list                                                                                                                    
   * @pre None.                                                                                                                                                       
   * @post if the insertion is successful, newEntry is at the front of the list     and other entries are renumbered accordingly, and the returned value is tr     ue\
.                                                                                                                                                                     
* @param newEntry  The entry to insert in the list                                                                                                                 
* @return True is insertion is successful, or false if not. */
  virtual bool insert(const ItemType& newEntry);

  /** Removes the front entry of the list                                                                                                                             
   * @pre none.                                                                                                                                                       
   * @post If the removal is successful, and the entry is removed, other items      are renumbered accoringly and the returned value is true.                         
   * @param none                                                                                                                                                      
   * @return True if removal is successful, or false if no. */
  virtual bool remove();

  /** Gets the entry at the front of the list                                                                                                                         
   * @pre none.                                                                                                                                                       
   * @post The front of the list has been returned                                                                                                                    
   * @param none.                                                                                                                                                     
   * @return the entry at the beginning of the list */
  virtual ItemType retrieve() const;

  /** Sees whether this list is empty.                                                                                                                                
      @return True if the list is empty; otherwise returns false. */
  virtual bool isEmpty() const = 0;

  /** Gets the current number of entries in this list.                                                                                                                
      @return The integer number of entries currently in the list. */
  virtual int getLength() const = 0;

  /** Removes all entries from this list.                                                                                                                             
      @post  List contains no entries and the count of items is 0. */
  virtual void clear() = 0;

  /** Gets the entry at the given position in this list.
    @pre  1 <= position <= getLength().
    @post  The desired entry has been returned.
    @param position  The list position of the desired entry.
    @return  The entry at the given position. */
  virtual ItemType getEntry(int position) const = 0;
}; //end frontListInterface                                                                                                                                           
#endif

