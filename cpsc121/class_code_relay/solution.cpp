#include <iostream>
#include <vector>
#include <string>

class Bagel {
 public:
    // 1. Default Constructor
    Bagel() : flavor_("plain"), hasCreamCheese_(false), toppings_({}), price_(1.00) {}

    // 2. Parameterized Constructor
    Bagel(std::string flavor, bool hasCreamCheese, std::vector<std::string> toppings, double price)
        : flavor_(flavor), hasCreamCheese_(hasCreamCheese), toppings_(toppings), price_(price) {}

    // 3. Copy Constructor
    Bagel(const Bagel& other)
        : flavor_(other.flavor_), hasCreamCheese_(other.hasCreamCheese_), toppings_(other.toppings_), price_(other.price_) {}

    // 4. Getter Functions (Accessors)
    std::string getFlavor() const {
        return flavor_;
    }

    bool getHasCreamCheese() const {
        return hasCreamCheese_;
    }

    std::vector<std::string> getToppings() const {
        return toppings_;
    }

    double getPrice() const {
        return price_;
    }

    // 5. Setter Functions (Mutators)
    void setFlavor(const std::string &flavor) {
        flavor_ = flavor;
    }

    void setHasCreamCheese(bool hasCreamCheese) {
        hasCreamCheese_ = hasCreamCheese;
    }

    void setToppings(const std::vector<std::string> &toppings) {
        toppings_ = toppings;
    }

    void setPrice(double price) {
        price_ = price;
    }

    // 6. Display Function
    void displayBagel() const {
        std::cout << "Flavor: " << flavor_ << std::endl;
        std::cout << "Cream Cheese: " << (hasCreamCheese_ ? "Yes" : "No") << std::endl;
        std::cout << "Toppings: ";
        
        if (toppings_.empty()) {
            std::cout << "None" << std::endl;
        } else {
            // Print out elements except the last
            for (size_t i = 0; i < toppings_.size()-1; ++i) {
                std::cout << toppings_.at(i);
                std::cout << ", ";
            }
            // Print last element with no commma
            std::cout << toppings_.at(toppings_.size()-1);
            std::cout << std::endl;
        }

        std::cout << "Price: $" << price_ << std::endl;
    }

 private:
    // Member variables
    std::string flavor_;
    bool hasCreamCheese_;
    std::vector<std::string> toppings_;
    double price_;
};


// Example usage in main (for testing)
int main() {
    // Create a bagel using the default constructor
    Bagel bagel1;
    bagel1.displayBagel();

    std::cout << "\n";

    // Create a bagel using the parameterized constructor
    std::vector<std::string> toppings = {"Smoked Salmon", "Capers", "Tomato", "Onion"};
    Bagel bagel2("Everything", true, toppings, 3.50);
    bagel2.displayBagel();

    return 0;
}
