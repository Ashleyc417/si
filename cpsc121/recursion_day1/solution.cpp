#include <iostream>
#include <string>

class Person {
public:
    // Constructor to create a person with a given name and optional parent
    Person(std::string name, Person* parent) : name(name), parent(parent) {}

    // Function to print the lineage starting from the current person up to the ancestor
    void PrintAncestors() {
        if (parent == nullptr) {
            std::cout << name << " is the Ancestor" << std::endl;
        }
      	else {
            std::cout << name << " is the child of " << parent->name << std::endl;
          	// Recursively call for the parent
            parent->PrintAncestors();
        }
    }
  
  	private:
      std::string name;
      Person* parent;
};


int main() {
    // Create the family tree
    Person* azulon = new Person("parent", nullptr);
    Person* ozai = new Person("ozai", azulon);
    Person* zuko = new Person("zuko", ozai);
    Person* iroh = new Person("iroh", zuko);

    // Print the ancestors of "Child2"
    iroh->PrintAncestors();

    // Clean up memory (for simplicity, not necessary in small-scale programs)
    delete azulon;
    delete ozai;
    delete zuko;
    delete iroh;

    return 0;
}
