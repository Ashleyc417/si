#include <iostream>
#include <map>
#include <memory>
#include <string>

class DisneyPark {
public:
    DisneyPark() {
      attractions_ = {{"Space Mountain", 0},
                      {"Pirates of the Caribbean", 0},
                      {"Guardians of the Galaxy - Mission Breakout", 0}};
    }

    // addAttraction: Adds an attraction to the park or increases its visit count if it's already there.
    void addVisit(const std::string &attraction) {
      // TODO: Fill in this function


    }

    // displayAttractions: Displays each attraction in the park along with its visit count.
    void displayAttractions() {
        // TODO: Declare an iterator for attractions_
      

         // TODO: Iterate through map & print out:
         // "<Attracttion Name> has been visited <count> times."
    


    }

private:
    std::map<std::string, int> attractions_;  // Stores attractions and their visit counts
};



class Visitor {
public:
    // Visitor: Constructor to initialize the visitor's name and the park they are visiting.
    Visitor(const std::string &name, std::shared_ptr<DisneyPark> park) : name_(name), park_(park) {}

    // visitAttraction: Allows the visitor to visit a specific attraction in the park.
    void visitAttraction(const std::string &attraction) {
        // TODO: add an attraction to the park


        // TODO: Print:
        // "<Visitor Name> visited <Attraction Name>"

    }

private:
    std::string name_;                          // Visitor's name
    std::shared_ptr<DisneyPark> park_;          // Shared pointer to the DisneyPark
};





int main() {
    // Create a shared pointer to DisneyPark
    auto disneyland = std::make_shared<DisneyPark>();

    // Create Visitor objects
    Visitor mickey("Mickey", disneyland);
    Visitor minnie("Minnie", disneyland);

    // Have the visitors visit attractions
    mickey.visitAttraction("Space Mountain");
    minnie.visitAttraction("Pirates of the Caribbean");
    mickey.visitAttraction("Space Mountain");

    std::cout << std::endl;
    // Display the attractions and visit counts
    disneyland->displayAttractions();

    return 0;
}
