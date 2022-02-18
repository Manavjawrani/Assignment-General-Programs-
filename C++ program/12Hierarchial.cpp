/*C++ program to demonstrate example of hierarchical inheritance 
to get square and cube of a number.*/

#include <iostream>
using namespace std;
 
class Number
{
private:
        int num;
public:
        void getNumber(void) // public
        {
            cout << "Enter an integer number: ";
            cin  >> num;
        }
        //to return num
        int returnNumber()
        { return num; }
};



 
//Base Class 1, to calculate square of a number
class Square:public Number
{
public:
    int getSquare(void)
    {
        int dim,sqr;
        dim=returnNumber(); //get number from class Number
        sqr=dim*dim; // calulate area
        return sqr;
    }
};
 
//Base Class 2, to calculate cube of a number
class Cube:public Number
{
      public:
    int getCube(void)
    {
        int num,cube;
        num=returnNumber(); //get number from class Number
        cube=num*num*num; // area
        return cube;
    }
};
int main()
{
        Square objS;
        Cube objC;

        int sqr,cube;
         
        objS.getNumber();
        sqr =objS.getSquare();
        cout << "Square of "<< objS.returnNumber() << " is: " << sqr  << endl;
         
        objC.getNumber();
        cube=objC.getCube();
        cout << "Cube   of "<< objS.returnNumber() << " is: " << cube << endl;
         
        return 0;
}
