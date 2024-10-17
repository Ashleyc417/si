#include <iostream>
#include <vector>
#include "ShoppingCart.h"


int main() {
    // Example 1: Ashley's Shopping Cart
    std::vector<Item> ashley_items = { 
        Item("Bouncy Ball", 1.00), 
        Item("Flower Lego Set", 50.00), 
        Item("Yogurt", 1.50) 
    };

    ShoppingCart ashley_cart("Ashley", ashley_items.size());
    ashley_cart.SetItems(ashley_items);
    ashley_cart.displayShoppingCart();

    // Example 2: Joel's Shopping Cart
    std::vector<Item> joel_items = { 
        Item("Soccer Ball", 25.00), 
        Item("Baseball Glove", 35.00) 
    };

    ShoppingCart joel_cart("Joel", joel_items.size());
    joel_cart.SetItems(joel_items);
    joel_cart.displayShoppingCart();

    // Example 3: Esteban's Shopping Cart
    std::vector<Item> esteban_items = { 
        Item("Chess Set", 20.00) 
    };

    ShoppingCart esteban_cart("Esteban", esteban_items.size());
    esteban_cart.SetItems(esteban_items);
    esteban_cart.displayShoppingCart();

    return 0;
}
