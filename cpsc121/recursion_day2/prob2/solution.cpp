#include <iostream>
#include <string>
#include <memory>

class Friend {
public:
    Friend(const std::string& name, int age, std::shared_ptr<Friend> left, std::shared_ptr<Friend> right)
        : name_(name), age_(age), left_(left), right_(right) {}

    // findAge recursively searches for a friend's age by name in the binary tree and
    // returns the age of the friend if found or -1 if the friend is not found.
    int FindAge(const std::string& name) {
        // Base case: if the current node's name matches the search name, return its age.
        if (name_ == name) {
            return age_;
        }
        else {
            // Recursive case: search in the left subtree if the name is smaller.
            if (name < name_ && left_ != nullptr) {
                return left_->FindAge(name);
            }
            else if (right_ != nullptr) { 
              return right_->FindAge(name);
            } 
        }

        // If no match is found, return -1.
        return -1;
    }

private:
    std::string name_;
    int age_;
    std::shared_ptr<Friend> left_;
    std::shared_ptr<Friend> right_;
};


int main() {
    // Create the friend tree
    std::shared_ptr<Friend> mutual1 = std::make_shared<Friend>("Ashley", 20, nullptr, nullptr);
    std::shared_ptr<Friend> mutual2 = std::make_shared<Friend>("Destiny", 22, nullptr, nullptr);
    std::shared_ptr<Friend> og_friend = std::make_shared<Friend>("Chelsy", 23, mutual1, mutual2);

    // Print the tree structure
    std::cout << "Tree Structure:" << std::endl;
    std::cout << "        Chelsy (23)" << std::endl;
    std::cout << "       /         \\" << std::endl;
    std::cout << "Ashley (20)   Destiny (22)\n" << std::endl;

    // Test case 1: Find friend Ashley
    std::string searchName1 = "Ashley";
    int age1 = og_friend->FindAge(searchName1);
    std::cout << "Age of " << searchName1 << ": " << age1 << std::endl;
    std::cout << "Expected: 20" << std::endl;

    // Test case 2: Find friend Chelsy
    std::string searchName2 = "Destiny";
    int age2 = og_friend->FindAge(searchName2);
    std::cout << "Age of " << searchName2 << ": " << age2 << std::endl;
    std::cout << "Expected: 22" << std::endl;

    // Test case 3: Friend not found
    std::string searchName3 = "David";
    int age3 = og_friend->FindAge(searchName3);
    std::cout << "Age of " << searchName3 << ": " << age3 << std::endl;
    std::cout << "Expected: -1" << std::endl;

    return 0;
}
