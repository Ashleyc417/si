#include <iostream>
#include <string>
#include <map>

int main() {
  std::map<std::string, int> item_to_qty {
    {"milk", 4},
    {"banana", 5},
    {"water", 10}
  };
  // TODO: Create an iterator for item_to_qty called `it`    
  // pointing to the first element of the container. 
  std::map<std::string, int>::iterator it = item_to_qty.begin();

  // TODO: Check if iterator object `it` is not yet pointing to the
  // element following the last element of the map
  while(it != item_to_qty.end()) {

    // TODO: Display the key of the current map element
    std::cout << "key: " << it->first << std::endl;

    // TODO: Display the value of the current map element
    std::cout << "value: " << it->second << std::endl;

    std::cout << "\n";
    // TODO: Move `it` to the next map element
    it++;

  }
  return 0;
}
