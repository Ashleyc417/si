#include <iostream>
#include <forward_list>

/* CHALLENGE: WRITE A PROGARM TO REVERSE A SINGLY LINKED LIST! DO THIS WITHOUT USING THE REVERSE()
   FUNCTION! TEST YOUR KNOWLEDGE ON HOW A SLL BEHAVES!
   PRACTICE READING DOCUMENTATION: https://en.cppreference.com/w/cpp/container/forward_list
*/

/* TODO: FILL IN FUNCTION HERE 🚧*/
void reverse(std::forward_list<int>& list) {




} 


int main() { 
  //REVERSE THIS ONE 
  std::forward_list<int> sll{0, 1, 2, 3, 4, 5, 6, 7, 8 , 9, 10};
  
  //TODO: CALL REVERSE FUNCTION HERE ⚠️
  

  
  // PRINTS OUT SLL AFTER REVERSING 
  for (int num: sll) {
    std::cout << num << " ";
  }
  std::cout << "\n";
}
