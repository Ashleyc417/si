#ifndef ITEM_H
#define ITEM_H
#include <string>

class Item {
  public:
    // Constructors
    Item();
    Item(const std::string &item_name, double price);
    Item(const Item &other);
    
    // Getters & Setters (Accessors & Mutators)
    std::string GetItemName();
    double GetPrice();
    void SetItemName(std::string item_name);
    void SetPrice(double price);

  // displayItem will print out the Item. 
  // For example:
  // Item: Bouncy Ball
  // Price: $ 1.00
    void displayItem();

  private:
    std::string item_name_;
    double price_;
};

#endif // ITEM_H
