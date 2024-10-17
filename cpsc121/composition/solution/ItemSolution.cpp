#include <iostream>
#include "/Users/ashleychan/Documents/csuf/si/cpsc121/composition/Item.h"

// Constructors
// TODO: Set up the initializer list for all of these Constructors
Item::Item() : item_name_(""), price_(0.00) {}
Item::Item(const std::string &item_name, double price) : item_name_(item_name), price_(price) {

}
Item::Item(const Item &other) : item_name_(other.item_name_), price_(other.price_) {}

// Getters & Setters (Accessors & Mutators)
// TODO: Implement all of these
std::string Item::GetItemName() { return item_name_; }
double Item::GetPrice() { return price_; }
void Item::SetItemName(std::string item_name) { item_name_ = item_name; }
void Item::SetPrice(double price) { price_ = price; }

// displayItem will print out the Item. 
// TODO: Implement the displayItem function.
//
// For example:
// Item: Bouncy Ball
// Price: $ 1.00
void Item::displayItem() {
std::cout << "Item: " << item_name_ << std::endl;
std::cout << "Price: " << price_ << std::endl;
}
