#ifndef __vect__
#define __vect__
#include <cmath>
#include <vector>
#include <iostream>



template <typename T>
class FixedVector {
public:
  // TODO 2: Create a Default Constructor, set the capacity to any value 
  // greater than 2 and the size 0
  
  
  
  // TODO 3: Create a Parameterized Constructor that accepts the capacity as a
  // parameter. Set Size to 0
  
  
  
  // TODO 4: Create a parameterized Constructor that accepts a vector. Set the 
  // size to the size of the vector, capacity to the capacity of the vector, 
  // and set the fixed_vect_ to the passed in vaector
  
  
  
  /* TODO 5: Define the push_back function. If the vector is full throw an 
   * exception. Otherwise push the item into the vector and increment size
  */
  // UPDATE: Modify the push_back vector to double the capacity if the vector is full
  void push_back(const T& item) {
    
    
    
  }

  /* TODO 6: Define the insert function. It accepts an index, and an item.If the
   * vector is full throw an exception. Otherwise insert the item into the vector
   * at the given position and increment size of the vector.
  */
  void insert (int index, const T& item) {
    
    
   
  }
     
  
  
  /* TODO 7: Define the pop_back function. Don't forget to decrement the size 
   * of the Vector. (Hint you won't need any loops for our implementation)
  */
  //UPDATE: the pop_back function to shrink the vector if the size is less than 
  // 1/3 of the total capacity
  void pop_back() {
   


  }
  
  
  
  /* TODO 8: Define the clear function. Clear the vector, set the size of the
   * vector to 0. (Hint you don't need any loops for our implementation)
  */
  void lear() {



  }

  /* TODO 9: Define setters and getters for the size and capacity memeber 
   * variables
   * */
  int get_size()  {
    

  }

  int get_capacity() const {
    
    
  }



  /* TODO 10: Overload the [] operator. It should accept an index
   *            if the index is invalid, throw an exception
   *            if the index is valid return item stored at that index
  */
  T& operator[](int index) {




  }


  /* TO-DO 11: write a function called at. It should accept an index
   *            if the index is invalid, throw an exception
   *            if the index is valid return item stored at that index
  */
  T at(int index){
    
    
    
  }


/* DON'T WORRY ABOUT THIS FUNCTION, ONLY DEFINED TO MAKE IT EASY TO PRINT OUT THE VECTOR */
friend std::ostream& operator<<(std::ostream& stream,  FixedVector vect) {
  for (int i = 0; i < vect.get_size(); i++) {
    stream << vect[i] << " ";
  }
    stream << "\n";
   return stream;
 }



/*Member variables are already provided for you*/
private:
size_t size_;
size_t capacity_;
std::vector<T> fixed_vect_;
};






#endif 
