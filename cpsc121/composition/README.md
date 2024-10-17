# Setup Stuff
1. Open your terminal & run:
    ```bash
    mkdir -p cpsc121/composition && touch cpsc121/composition/ShoppingCart.h && touch cpsc121/composition/README.md && touch cpsc121/composition/ShoppingCart.cpp && touch cpsc121/composition/main.cpp && touch cpsc121/composition/Item.h && touch cpsc121/composition/Item.cpp && curl --remote-name-all https://raw.githubusercontent.com/Ashleyc417/si/main/cpsc121/composition/ShoppingCart.cpp -o cpsc121/composition/ShoppingCart.cpp && curl --remote-name-all https://raw.githubusercontent.com/Ashleyc417/si/main/cpsc121/composition/README.md -o cpsc121/composition/README.md && curl --remote-name-all https://raw.githubusercontent.com/Ashleyc417/si/main/cpsc121/composition/main.cpp -o cpsc121/composition/main.cpp && curl --remote-name-all https://raw.githubusercontent.com/Ashleyc417/si/main/cpsc121/composition/Item.h -o cpsc121/composition/Item.h && curl --remote-name-all https://raw.githubusercontent.com/Ashleyc417/si/main/cpsc121/composition/ShoppingCart.h -o cpsc121/composition/ShoppingCart.h && curl --remote-name-all https://raw.githubusercontent.com/Ashleyc417/si/main/cpsc121/composition/Item.cpp -o cpsc121/composition/Item.cpp
    ```

2. Then run `code .` to open VS Code.
3. Start Coding!

<br/>

## TODO's:
- Create the `Item` class in `Item.cpp.
- Create the `ShopppingCart` class in `ShoppingCart.cpp`

<br/>

## Run Your Code
1. Compile using `clang++ main.cpp Item.cpp ShoppingCart.cpp` into an executable file.
2. Run the executable file using `./a.out`

<br/>

### Expected Output:

```plaintext
----------------------------------------------
Ashley's Shopping Cart:
----------------------------------------------
Item: Bouncy Ball              
Price: $1.00

Item: Flower Lego Set          
Price: $50.00

Item: Yogurt                   
Price: $1.50

----------------------------------------------
Joel's Shopping Cart:
----------------------------------------------
Item: Soccer Ball             
Price: $25.00

Item: Baseball Glove           
Price: $35.00

Esteban's Shopping Cart:
Item: Chess Set
Price: $20.00
----------------------------------------------
```

This `main` function creates three shopping carts for Ashley, Joel, and Esteban, each with different items. It also displays the cart contents using `displayShoppingCart()`.