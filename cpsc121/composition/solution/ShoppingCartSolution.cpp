#include <iostream>
#include "/Users/ashleychan/Documents/csuf/si/cpsc121/composition/ShoppingCart.h"

// Constructors
// TODO: Set up the initializer list for all of these Constructors
ShoppingCart::ShoppingCart() : customer_name_(""), items_({}) {}
ShoppingCart::ShoppingCart(std::string customer_name, int items) : customer_name_(customer_name), items_(items) {}
ShoppingCart::ShoppingCart(const ShoppingCart &other) : customer_name_(other.customer_name_), items_(other.items_) {}

// Getters & Setters (Accessors & Mutators)
// TODO: Implement all of these
std::string ShoppingCart::GetCustomerName() { return customer_name_; }
std::vector<Item> ShoppingCart::GetItems() {return items_; }
void ShoppingCart::SetCustomerName(std::string customer_name) { customer_name_ = customer_name; }
void ShoppingCart::SetItems(const std::vector<Item> items) { items_ = items; }

// displayShoppingCart will print the contents of a single instance of
// a Shopping cart including the customer and their items.
// (Hint: Try using the displayItem function for each Item)
// Ex.
// ----------------------------------------------
// Ashley's Shopping Cart:
// ----------------------------------------------
// Item: Bouncy Ball              
// Price: $1.00
//
// Item: Flower Lego Set          
// Price: $50.00
//
// Item: Yogurt                   
// Price: $1.50
void ShoppingCart::displayShoppingCart() {
  std::cout << std::endl;
  std::cout << "----------------------------------------------" << std::endl;
  std::cout << customer_name_ << "'s Shopping Cart: " << std::endl;
  std::cout << "----------------------------------------------" << std::endl;
  
  // Print each item
  for (Item item : items_) {
    item.displayItem();
    std::cout << std::endl;
  }
}
