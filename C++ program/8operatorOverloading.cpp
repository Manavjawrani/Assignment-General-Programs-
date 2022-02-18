/* C++ Program to add two Complex Numbers */
#include<iostream>
using namespace std;
class Complex{
public:
    int real;
    int imag;
     /* Function to set the values of
      * real and imaginary part of each complex number
      */
     void setvalue()
    {
        cin>>real;
        cin>>imag;
    }
	/* Function to display the sum of two complex numbers */
    void display()
    {
        cout<<real<<"+"<<imag<<"i"<<endl;
    }
	/* Function to add two complex numbers */
 
     Complex operator +(Complex c)
    {
        Complex temp;
        temp.real=real+c.real;
        temp.imag=imag+c.imag;
        return(temp);
    }
   
 };
    
    
  
   
    
    
int main()
    {
        Complex c1,c2,c3;
        cout<<"Enter real and imaginary part of first complex number"<<endl;
        c1.setvalue();
        cout<<"Enter real and imaginary part of second complex number"<<endl;
        c2.setvalue();
        cout<<"Sum of two complex numbers is"<<endl;
        c3=c1+c2;
        c3.display();
    return 0;
    }