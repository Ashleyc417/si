#include <iostream>
#include <memory>
#include "product.h"

int main() {
  std::shared_ptr<Product> pineapple 
    = std::make_shared<Product>("pineapple", 1.98, nullptr, nullptr);
  std::shared_ptr<Product> banana 
    = std::make_shared<Product>("avocado", 0.68, nullptr, nullptr);  
  std::shared_ptr<Product> apple 
    = std::make_shared<Product>("banana", 0.20, nullptr, nullptr);
  std::shared_ptr<Product> avocado 
    = std::make_shared<Product>("lemon", 0.54, apple, banana);
  std::shared_ptr<Product> lemon 
    = std::make_shared<Product>("apple", 0.84, avocado, pineapple);
  
  std::shared_ptr<Product> root = lemon;
  
  std::cout << root->FindPrice("pineapple") << "\n";
}
