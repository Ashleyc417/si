#include <iostream>
#include <memory>
#include <string>

class Task {
public:
    Task(const std::string& name) : name(name) {
        std::cout << "Task created: " << name << std::endl;
    }
    
    ~Task() {
        std::cout << "Task destroyed: " << name << std::endl;
    }
    
    void display() const {
        std::cout << "Task: " << name << std::endl;
    }

private:
    std::string name;
};

int main() {
    // TODO: Step 1 - Create a shared pointer `p1` to a new `Task` with the name "Finish assignment"
    // Then, print out p1's use count (refer to the README.md)


    // TODO: Step 2 - Create a second shared pointer `p2` that shares ownership with `p1`
    // Then, print out p2's use count (refer to the README.md)


    // TODO: Step 3 - Create a third shared pointer `p3` that also shares ownership with `p1`
    // Then, print out p3's use count (refer to the README.md)


    // TODO: Step 4 - Use `p1` to call the `display` function on the Task


    // All pointers (`p1`, `p2`, `p3`) go out of scope at the end of `main`, automatically deleting the Task object.
    return 0;
}
