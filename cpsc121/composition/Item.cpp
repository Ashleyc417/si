#include <iostream>
#include "Item.h"

class Item {
  public:
    // Constructors
    // TODO: Set up the initializer list for all of these Constructors
    Item() {}
    Item(const std::string &item_name, double price) {}
    Item(const Item &other) {}
    
    // Getters & Setters (Accessors & Mutators)
    // TODO: Implement all of these
    std::string GetItemName() {}
    double GetPrice() {}
    void SetItemName(std::string item_name) {}
    void SetPrice(double price) {}

    // displayItem will print out the Item. 
    // For example:
    // Item Name: Bouncy Ball
    // Price: $ 1.00
    void displayItem() {}

  private:
    std::string item_name_;
    double price_;
};