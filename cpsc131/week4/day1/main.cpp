#include <iostream>

class Point {
public:
    // Constructor
    Point(double x, double y) : x_(x), y_(y) {}
		
    // TODO: Implement operator overloading functions
    Point operator+(const Point& other) const {
      return Point(this->x_ + other.x_, this->y_ + other.y_);
    }

    Point operator-(const Point& other) const {
      return Point(this->x_ - other.x_, this->y_ - other.y_);
    }

    bool operator==(const Point& other) const {
      return (this->x_ == other.x_) && (this->y_ == other.y_);
    }

    Point operator=(const Point& other) {
      this->x_ = other.x_;
      this->y_ = other.y_;
      return *this;
    }

    // Print function implementation 
		void print() const {
		    std::cout << "(" << x_ << ", " << y_ << ")" << std::endl;
		}

private:
    double x_;
    double y_;
};


// Main function to test the operator overloading
int main() {
    Point p1(3.0, 4.0);
    Point p2(1.5, -2.0);

    // Test addition
    // Expected Output: (4.5, 2.0)
    Point sum = p1 + p2;
    std::cout << "Sum: ";
    sum.print();

    // Test subtraction
    // Expected Output: (1.5, 6.0)
    Point diff = p1 - p2;
    std::cout << "Difference: ";
    diff.print();  

    // Test equality
    // Expected Output: True
    Point p3(3.0, 4.0);
    std::cout << "p1 == p3: " << (p1 == p3 ? "True" : "False") << std::endl;  

    // Test assignment
    // Expected Output: (3.0, 4.0)
    Point p4(0.0, 0.0);
    p4 = p1;
    std::cout << "After assignment, p4: ";
    p4.print();

    return 0;
}
