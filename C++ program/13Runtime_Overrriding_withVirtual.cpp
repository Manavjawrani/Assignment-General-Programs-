
 
#include <iostream>
using namespace std;
 
class Shape //base class.
{
    protected:
        int width, height;
 
    public:
        Shape( int a=0, int b=0) //Constructor.
         {
            width = a;
            height = b;
         }
 
         virtual int area() //Simple Function to display the result.
         {
            cout << "Shape class area | Base Class | :" <<endl;
            return 0;
         }
};
 
class Rectangle: public Shape //Derived Class from the Class shape.
{
    public:
        Rectangle( int a=0, int b=0):Shape(a, b) { } //constructor.
        int area () //Simple function to display result.
         {
            cout << "Rectangle class area | Derived Class | :" <<endl;
            return (width * height);
         }
};
 
 
class Triangle: public Shape //Derived Class from class Shape.
{
    public:
        Triangle( int a=0, int b=0):Shape(a, b) { } //Constructor.
        int area () //Simple function to display result.
         {
            cout << "Triangle class area | Derived Class | :" <<endl;
            return (width * height / 2);
         }
};
 
 
int main( )
{
    Shape *shape; //pointer Object of type shape.
    Rectangle rec(10,7); //Rectangle Object.
    Triangle tri(10,5); //Triangle Object.
 
 
    shape = &rec;     // store the address of Rectangle
    shape->area(); // call rectangle area using this pointer.
 
    shape = &tri; // store the address of Triangle
    shape->area(); // call triangle area using this pointer.
    return 0;
}

