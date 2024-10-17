#ifndef SHOPPING_CART_H
#define SHOPPING_CART_H
#include "Item.h"
#include <string>
#include <vector>

class ShoppingCart {
  public:
    // Constructors
    ShoppingCart();
    ShoppingCart(std::string customer_name, int items);
    ShoppingCart(const ShoppingCart &other);

    // Getters & Setters (Accessors & Mutators)
    std::string GetCustomerName();
    std::string GetItems();
    void SetCustomerName(std::string customer_name);
    void SetItems(const std::vector<Item> items);

    // displayShoppingCart will print the contents of a single instance of
    // a Shopping cart including the customer and their items.
    // Ex.
    // Ashley's Shopping Cart:
    // Item 1: Bouncy Ball              Price: $1.00
    // Item 2: Flower Lego Set          Price: $50.00
    // Item 3: Yogurt                   Price: $1.50
    void displayShoppingCart();

  private:
    std::string customer_name_;
    std::vector<Item> items_;
};

#endif // SHOPPING_CART_H

