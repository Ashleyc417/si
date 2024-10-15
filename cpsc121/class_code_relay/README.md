# Bagel Class solution

## Overview

This is what the finished Bagel class looks like from the Class Code Relay!

## Features

- **Member Variables**: Stores essential bagel information like flavor, cream cheese status, toppings, and price.
- **Constructors**: 
  - Default constructor sets default values.
  - Parameterized constructor allows custom bagel creation.
  - Copy constructor creates a copy of an existing bagel object.
- **Accessors (Getters)**: Retrieve the values of each attribute.
- **Mutators (Setters)**: Update the values of each attribute.
- **Display Function**: Outputs the bagel details in a readable, formatted way.

## File Structure

```
/LegendaryBagelClass
  ├── LegendaryBagel.cpp    # C++ implementation of the LegendaryBagel class
  ├── README.md             # This README file
  └── main.cpp              # Main file to test the LegendaryBagel class
```

## Compilation Instructions

To compile and run the program, follow these steps:

1. **Clone the repository** (if you haven't already):

   ```bash
   git clone <repository_url>
   cd LegendaryBagelClass
   ```

2. **Compile the C++ code** using your favorite compiler:

   ```bash
   g++ -o bagelShop LegendaryBagel.cpp main.cpp
   ```

3. **Run the executable**:

   ```bash
   ./bagelShop
   ```

   This will display a default bagel and a customizable bagel with toppings.

## Example Usage

In the `main.cpp` file, two bagels are created:

1. A **default bagel** using the default constructor:
   - Flavor: plain
   - Cream Cheese: No
   - Toppings: None
   - Price: $1.00

2. A **customized bagel** using the parameterized constructor:
   - Flavor: Everything
   - Cream Cheese: Yes
   - Toppings: Smoked Salmon, Capers, Tomato, Onion
   - Price: $3.50

Output:

```
Flavor: plain
Cream Cheese: No
Toppings: None
Price: $1

Flavor: Everything
Cream Cheese: Yes
Toppings: Smoked Salmon, Capers, Tomato, Onion
Price: $3.5
```

## Class Details

### LegendaryBagel Class:

- **Private Members**:
  - `std::string flavor_`: The flavor of the bagel (e.g., "plain", "everything").
  - `bool hasCreamCheese_`: A flag indicating whether the bagel has cream cheese (true/false).
  - `std::vector<std::string> toppings_`: A vector of toppings for the bagel (e.g., "smoked salmon", "capers").
  - `double price_`: The price of the bagel.

- **Constructors**:
  - **Default Constructor**: Initializes with default values.
  - **Parameterized Constructor**: Allows you to set the values of the bagel when creating it.
  - **Copy Constructor**: Allows you to copy one bagel's attributes to another.

- **Getter Functions**:
  - `getFlavor()`: Returns the flavor of the bagel.
  - `getHasCreamCheese()`: Returns whether the bagel has cream cheese.
  - `getToppings()`: Returns the list of toppings.
  - `getPrice()`: Returns the price of the bagel.

- **Setter Functions**:
  - `setFlavor()`: Sets the flavor of the bagel.
  - `setHasCreamCheese()`: Sets whether the bagel has cream cheese.
  - `setToppings()`: Sets the list of toppings.
  - `setPrice()`: Sets the price of the bagel.

- **Display Function**:
  - `displayBagel()`: Prints all the bagel details in a friendly, readable format.

## Contributing

Feel free to open issues or submit pull requests if you'd like to contribute to this project. All contributions are welcome!

---

### License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

---

This `README.md` will give students and other developers a clear understanding of the project structure, how to compile and run the code, and how the class is designed. It also encourages contributions, should anyone want to improve or extend the project.
