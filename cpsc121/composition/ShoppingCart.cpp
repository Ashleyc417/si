#include <iostream>
#include "ShoppingCart.h"

// ------------------------------------------------------------------
// CONSTRUCTORS
// ------------------------------------------------------------------
//
// TODO: Set up the initializer list for all of these Constructors
//
// Default Constructor
ShoppingCart::ShoppingCart() {}

// Parameterized Constructor
ShoppingCart::ShoppingCart(std::string customer_name, int items) {}

// Copy Constructor
ShoppingCart::ShoppingCart(const ShoppingCart &other) {}


// ------------------------------------------------------------------
// Getters & Setters (Accessors & Mutators)
// ------------------------------------------------------------------
std::string ShoppingCart::GetCustomerName() {
  // TODO: Fill in this function

}

std::vector<Item> ShoppingCart::GetItems() {
  // TODO: Fill in this function

}

void ShoppingCart::SetCustomerName(std::string customer_name) {
  // TODO: Fill in this function

}

void ShoppingCart::SetItems(const std::vector<Item> items) {
  // TODO: Fill in this function 
  
}


// displayShoppingCart will print the contents of a single instance of
// a Shopping cart including the customer and their items.
// (Hint: Try using the displayItem function for each Item)
//
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
//
void ShoppingCart::displayShoppingCart() {
  // TODO: Fill in this function

}
