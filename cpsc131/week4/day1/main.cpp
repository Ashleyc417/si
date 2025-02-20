#include <iostream>

class Point {
public:
    // Constructor
    Point(double x, double y) : x_(x), y_(y) {}
    
    // ========================================================================
		// TODO: Fill in this functions below
    // ========================================================================
    // This `+` function overload should add two points together.
    Point operator+(const Point& other) const {
      return Point(this->x_ + other.x_, this->y_ + other.y_);
    }

    // This `-` function overload should subtract one point from another.
    Point operator-(const Point& other) const {
      return Point(this->x_ - other.x_, this->y_ - other.y_);
    }

    // This `*` function overload should multiply a point by a scalar value.
    Point operator*(const int scalar) const {
      return Point(this->x_ * scalar, this->y_ * scalar);
    }
    
    // This `==` function overload should check whether two points are equal or not.
    bool operator==(const Point& other) const { 
      return (this->x_ == other.x_) && (this->y_ == other.y_);
    }

    // This `=` function overload should assign the current point the same values as 
    // the other point.
    Point& operator=(const Point& other) {
      // Prevent self-assignment
      this->x_ = other.x_;
      this->y_ = other.y_;
      return *this;
    }

    // Print function implementation 
		void print() const {
		    std::cout << "(" << this->x_ << ", " << this->y_ << ")" << std::endl;
		}

private:
    double x_;
    double y_;
};


// Main function to test the operator overloading
int main() {
    Point p1(3.0, 4.0);
    Point p2(1.5, -2.0);

    // TODO: Test addition
    // Expected Output: 
    // Sum: (4.5, 2.0)
    Point sum = p1 + p2;
    std::cout << "Sum: ";
    sum.print();

    // TODO: Test subtraction
    // Expected Output:
    // Difference: (1.5, 6.0)
    Point diff = p1 - p2;
    std::cout << "Difference: ";
    diff.print();  

    // TODO: Test equality
    // Expected Output:
    // p1 == p3: True
    Point p3(3.0, 4.0);
    if (p1 == p3) {
      std::cout << "p1 == p3: True" << std::endl;
    }
    else {
      std::cout << "p1 == 3: False" << std::endl;
    }
    // could also use:
    // std::cout << "p1 == p3: " << (p1 == p3 ? "True" : "False") << std::endl;  

    // TODO: Test assignment
    // Expected Output:
    // After assignment, p4: (3.0, 4.0)
    Point p4(0.0, 0.0);
    p4 = p1;
    std::cout << "After assignment, p4: ";
    p4.print();

    return 0;
}
