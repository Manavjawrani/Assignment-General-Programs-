#include<iostream>
#include<math.h>
using namespace std;

class Triangle 
{
float side1,side2,side3;

public:

Triangle () 
   {
    side1=3;
    side2=4;
    side3=5;
    }

Triangle (float input_side) // Equilateral Triangle//
  {
    side1=input_side;
    side2=input_side;
    side3=input_side;

  }
Triangle(float input_side1, float input_side2)  // Isosceles Triangle//
    {
       side1=input_side1;
       side2=input_side1;
       side3=input_side2;
   }
Triangle(float input_side1, float input_side2,  float input_side3)  // Scalene Triangle//
   {
       side1=input_side1;
       side2=input_side2;
       side3=input_side3;
   }
~Triangle() {};

   void display() {
       cout << "\nThe sides of the triangle are \n" << side1 << ", " << side2 << ", " << side3 << endl;
   }

   float findArea()
   {
      
       if (side1 < 0 || side2 < 0 || side3 < 0 || (side1 + side2 <= side3) || side1 + side3 <= side2 || side2 + side3 <= side1)
       {
           cout << "Not a valid triangle";
           exit(0);
       }
       float s = (side1 + side2 + side3) / 2;
       return sqrt(s * (s - side1) * (s - side2) * (s - side3));
   }

};
int main() {

   float equi_side{};
   float iso_side1{};
   float iso_side2{};
   float sca_side1{};
   float sca_side2{};
   float sca_side3{};
  
   cout << "\nEnter side of Equilateral Triangle : \n";
   cin >> equi_side;

   cout << "\nEnter sides of Isosceles Triangle : \n";
   cin >> iso_side1 >> iso_side2;

   cout << "\nEnter sides of Scalene Triangle : \n";
   cin >> sca_side1 >> sca_side2 >> sca_side3;

   Triangle t1;
   Triangle t2(equi_side);
   Triangle t3(iso_side1, iso_side2);
   Triangle t4(sca_side1, sca_side2, sca_side3);
   

   t1.display();  //Destructor Area//
   t2.display(); // Equilateral Triangle Area//
   t3.display(); // Isosceles Triangle Area//
   t4.display();  // Scalene Triangle Area//
   cout << "\nThe area of the triangle is : \n"<<t1.findArea() << endl;
   cout << "\nThe area of the equilateral triangle is : \n"<<t2.findArea() << endl;
   cout <<"\nThe area of the isoceles triangle is : \n"<< t3.findArea() << endl;
   cout << "\nThe area of the scalene triangle is : \n"<<t4.findArea() << endl;

   return 0;
}
