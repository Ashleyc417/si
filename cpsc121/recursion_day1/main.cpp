#include <iostream>
#include <string>

class Person {
public:
    // Constructor to create a person with a given name and optional parent
    Person(std::string name, Person* parent) : name(name), parent(parent) {}

    // Function to print the lineage starting from the current person up to the ancestor
    void PrintAncestors() {
        // TODO: Complete this recursive function using the expected output
        // in the README.md to guide you on what to print.


    }
  
  	private:
      std::string name;
      Person* parent;
};

int main() {
    // Create the family tree
    Person* paul = new Person("parent", nullptr);
    Person* joel = new Person("joel", paul);
    Person* pillow = new Person("pillow", joel);
    Person* mark = new Person("mark", pillow);

    // Print the ancestors of "Child2"
    mark->PrintAncestors();

    // Clean up memory (for simplicity, not necessary in small-scale programs)
    delete paul;
    delete joel;
    delete pillow;
    delete mark;

    return 0;
}