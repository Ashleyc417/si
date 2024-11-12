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
      // attractions_.at(key) gives us the element/value at that key
      attractions_.at(attraction)++;
    }

    // displayAttractions: Displays each attraction in the park along with its visit count.
    void displayAttractions() {
        // Create iterator for attractions_
        std::map<std::string, int>::iterator it;
        
         // Iterate through map
        for(it = attractions_.begin(); it != attractions_.end(); it++) {
            std::cout << it->first << " has been visited " << it->second << " times.\n";
        }
    }

private:
    std::map<std::string, int> attractions_;  // Stores attractions and their visit counts
};



class Visitor {
public:
    // Visitor: Constructor to initialize the visitor's name and the park they are visiting.
    Visitor(const std::string &name, std::shared_ptr<DisneyPark> park)
        : name_(name), park_(park) {}

    // visitAttraction: Allows the visitor to visit a specific attraction in the park.
    void visitAttraction(const std::string &attraction) {
        // add an attraction to the park
        park_->addVisit(attraction);
        std::cout << name_ << " visited " << attraction << "!\n";
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
