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
        cin>>this->real;
        cin>>this->imag;
    }
	/* Function to display the sum of two complex numbers */
    void display()
    {
        cout<<real<<"+"<<imag<<"i"<<endl;
    }
	/* Function to add two complex numbers */
 
 
    /* pass both object explicity and the result be stored in implicit.  */
    void sum(Complex c1, Complex c2)
    {
        real=c1.real+c2.real;
        imag=c1.imag+c2.imag;
    }
    
    /* pass both object explicity and the result be stored in implicit. The answer here is stored in the called object, alternatively to return answer you could store ans in temp object and return too */
    void sum( Complex c2)
    {
        real=real+c2.real;
        imag=imag+c2.imag;
    }
    
    
    };
int main()
    {
        Complex c1,c2,c3;
        cout<<"Enter real and imaginary part of first complex number"<<endl;
        c1.setvalue();
        cout<<"First complex number is"<<endl;
        c1.display();
        cout<<"Enter real and imaginary part of second complex number"<<endl;
        c2.setvalue();
        cout<<"Second complex number is"<<endl;
        c2.display();
        cout<<"Sum of two complex numbers is"<<endl;
        /* call of function when one object is passed explicity and other passed implicitly and the result be stored in implicit */
        // c1.sum(c2);
        // c1.display();
        
        /* call of function when both object are passd explicity and the result be stored in implicit */
       // c3.sum(c1,c2);
       // c3.display();
    return 0;
    }