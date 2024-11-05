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
    // TODO: Step 1 - Create a shared pointer `p1` to a new Task with the name "Finish assignment"
    // This creates a shared_ptr to a Task and displays the initial reference count.



    // TODO: Step 2 - Create a second shared pointer `p2` that shares ownership with `p1`
    // Assign `p1` to `p2`, which increases the reference count.



    // TODO: Step 3 - Create a third shared pointer `p3` that also shares ownership with `p1`
    // Assign `p1` to `p3`, further increasing the reference count.



    // TODO: Step 4 - Use `p1` to call the `display` function on the Task
    // Demonstrate accessing the Task object through the shared pointer.


    // All pointers (`p1`, `p2`, `p3`) go out of scope at the end of `main`, automatically deleting the Task object.
    return 0;
}
