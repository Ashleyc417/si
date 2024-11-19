#include <iostream>
#include <string>
#include <vector>

void DisplayVector(const std::vector<std::string>& vec) {
  for (std::string elem : vec) {
    std::cout << elem << " ";
  }
  std::cout << "\n";
}

int main() {
  std::vector<std::string> volunteer_names {
    "Sylvia", "Fram", "Mildred", "Willie", "Milton"
  };
  DisplayVector(volunteer_names);
  std::cout << "\nAfter insertion\n";
  // TODO: Create an iterator for volunteer_names called `it`
  // pointing to the first element of the container. 
  std::vector<std::string>::iterator it = volunteer_names.begin();  

  // TODO: Insert Tuffy between Fram and Mildred
  volunteer_names.insert(it + 2, "Tuffy"); 

  DisplayVector(volunteer_names);
  return 0;
}
