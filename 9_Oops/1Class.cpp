#include <iostream>
using namespace std;

class Rectangle
{
private:
    int Length;
    int Breadth;

public:
    // Constructor to initialize Length and Breadth when a Rectangle object is created
    Rectangle(int l, int b)
    {
        Length = l;
        Breadth = b;
    }

    // Public member function to get the Length
    int getLength() const
    {
        return Length;
    }

    // Public member function to get the Breadth
    int getBreadth() const
    {
        return Breadth;
    }

    // Public member function to calculate the area of the rectangle
    int area() const
    {
        return Length * Breadth;
    }

    // Public member function to change the Length parameter of the rectangle
    void setLength(int l)
    {
        Length = l;  // Set the value of the private Length variable
        cout << "Length set to: " << Length << endl;
    }
};

int main()
{
    // Rectangle r(10, 5);
    int initialLength, initialBreadth;
    cout << "Enter the initial values for Length and Breadth: ";
    cin >> initialLength >> initialBreadth;

    // Create a Rectangle object named 'r' with user-provided initial values
    Rectangle r(initialLength, initialBreadth);
    // Accessing the values using public member functions and printing initial values
    cout << "The initial value assigned to Rectangle: Length=" << r.getLength() << ", Breadth=" << r.getBreadth() << endl;

    // Print the area of the rectangle using the area() member function
    cout << "The area of the rectangle: " << r.area() << endl;

    // Change the Length parameter of the rectangle using the setLength() member function
    r.setLength(15);

    // Print the updated values
    cout << "Updated values: Length=" << r.getLength() << ", Breadth=" << r.getBreadth() << endl;

    return 0;
}
