#include <ios>
#include <memory>
#include <string>
class Product {
public:
  // TODO: Create a constructor that accepts a name, a price,
  // a Product pointer to the left and Product pointer to the right.
  Product(const std::string &name, double price, std::shared_ptr<Product> left, 
      std::shared_ptr<Product> right) : name_(name), price_(price), left_(left), 
      right_(right) {}

  const std::string &Name() const { return name_; }
  double Price() const { return price_; }

  // TODO: Create a recursive function called FindPrice that returns
  // the price of a product.
  double FindPrice(const std::string  &name) {
    // Base Case: answer found, don't need to traverse anymore
    if (this->name_ == name) {
      return price_;
    }
    else {
      if (name_ < name && right_ != nullptr) {
          return right_->FindPrice(name);
      }
      else {
        if (name_ > name && left_ != nullptr) {
          return left_->FindPrice(name);
        }
      }
    }
    return -1;
  }

private:
  std::string name_;
  double price_;
  // TODO: Create pointer to the left Product
  std::shared_ptr<Product> left_; 
  // TODO: Create pointer to the right Product
  std::shared_ptr<Product> right_;
  
};
