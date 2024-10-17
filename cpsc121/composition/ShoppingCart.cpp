#include <iostream>
#include "ShoppingCart.h"

class ShoppingCart {
  public:
    // Constructors
    // TODO: Set up the initializer list for all of these Constructors
    ShoppingCart();
    ShoppingCart(std::string customer_name, int items);
    ShoppingCart(const ShoppingCart &other);

    // Getters & Setters (Accessors & Mutators)
    // TODO: Implement all of these
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