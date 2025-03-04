#include <iostream>
#include <string>
#include <forward_list>

class Pokemon {
 public:
  Pokemon(std::string name, std::string type) : name_(name), type_(type) {}

  // Overload for equality operator
  bool operator==(const Pokemon& rhs) const {
      return (rhs.name_ == this->name_ && rhs.type_ == this->type_);
  }

  // Accessors
  std::string getName() const { return name_; }
  std::string getType() const { return type_; }

 private:
  std::string name_;
  std::string type_;
};


// displayPokemon will print each Pokemon's name and type
void displayPokemon(const Pokemon& pokemon) {
  std::cout << "Name: " << pokemon.getName() << ", Type: " << pokemon.getType() << std::endl;
}



// =================================================================================================
// SINGLY LINKED LIST DOCUMENTATION C++: 
// https://en.cppreference.com/w/cpp/container/forward_list
// =================================================================================================
int main() {
  // Singly linked list using std::forward_list
  std::forward_list<Pokemon> pokemonList;
  
  // Insert Pokemon using insert_after
  pokemonList.insert_after(pokemonList.before_begin(), Pokemon("Pikachu", "Electric"));
  pokemonList.insert_after(pokemonList.before_begin(), Pokemon("Charizard", "Fire"));
  pokemonList.insert_after(pokemonList.before_begin(), Pokemon("Blastoise", "Water"));
  pokemonList.insert_after(pokemonList.before_begin(), Pokemon("Venusaur", "Grass"));
  pokemonList.insert_after(pokemonList.before_begin(), Pokemon("Mewtwo", "Psychic"));

  // Display the initial Pokemon list
  std::cout << "Initial Pokemon List:" << std::endl;
  for (const auto& pokemon : pokemonList) {
      displayPokemon(pokemon);
  }

  // =================================================================================================
  //TO-DO (🚧): Insert a new Pokemon named "Ditto" after "Charizard"
  // =================================================================================================



  // =================================================================================================
  // TO-DO (🚧): Erase the Pokemon named "Venasaur" from the list using erase_after;
  // =================================================================================================



  // =================================================================================================
  // Display the updated Pokemon list
  // =================================================================================================



  // =================================================================================================
  // TO-DO (🚧): Search for and display the Pokemon named "Charizard" (if found)
  // =================================================================================================



  // =================================================================================================
  // TO-DO (🚧): Search for and display the Pokemon named "Squirtle" (if found)
  // =================================================================================================



  // =================================================================================================
  // TO-DO (🚧): Display the count of Pokémon in the list
  // =================================================================================================




  return 0;
  }

