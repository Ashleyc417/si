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
    // This creates a shared_ptr to a Task and displays the initial reference count.
    std::shared_ptr<Task> p1 = std::make_shared<Task>("Finish assignment");
    std::cout << "Reference count after creating p1: " << p1.use_count() << std::endl;

    // TODO: Step 2 - Create a second shared pointer `p2` that shares ownership with `p1`
    // Then, print out p2's use count (refer to the README.md)
    // Assign `p1` to `p2`, which increases the reference count.
    std::shared_ptr<Task> p2 = p1;
    std::cout << "Reference count after creating p2: " << p1.use_count() << std::endl;

    // TODO: Step 3 - Create a third shared pointer `p3` that also shares ownership with `p1`
    // Then, print out p3's use count (refer to the README.md)
    // Assign `p1` to `p3`, further increasing the reference count.
    std::shared_ptr<Task> p3 = p1;
    std::cout << "Reference count after creating p3: " << p1.use_count() << std::endl;

    // TODO: Step 4 - Use `p1` to call the `display` function on the Task
    // Demonstrate accessing the Task object through the shared pointer.
    p1->display();

    // All pointers (`p1`, `p2`, `p3`) go out of scope at the end of `main`, automatically deleting the Task object.
    return 0;
}
