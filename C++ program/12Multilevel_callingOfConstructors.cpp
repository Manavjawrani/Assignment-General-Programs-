
#include <iostream>
using namespace std;

class A
{
private:
        int a;
public:
      
        A()
        { a=10;
            
            cout<<"Hi i am constructor of class A"<< endl;
        }
         A(int x)
        {
            a=x;
        }
        void get_a(int val_a)
        {
            a=val_a;
        }
         
        void disp_a(void)
        {
            cout << "Value of a: " << a << endl;
        }
};
class B: public A
{
private:
        int b;
public:
       
        B()
        {
            b=20;
            cout<<"Hi i am constructor of class B"<< endl;
        }
         B(int x, int y): A( x)
        {
           
            b= y;
        }
        //assign value of a from here
        
        void get_b(int val_a, int val_b)
        {
            //assign value of a by calling function of class A
            get_a(val_a);   
            b=val_b;
        }
         
        void disp_b(void)
        {
            //display value of a
            disp_a();
            cout << "Value of b: " << b << endl;
        }
};

class C: public B
{
private:
        int c;
public:
       
        C()
        {  c=30;
            
            cout<<"Hi i am constructor of class C"<< endl;
        }
         C(int n1, int n2, int n3): B(n1,n2)
         { 
             c=n3;
         }
        //assign value of a from here
        void get_c(int val_a, int val_b,int val_c)
        {
            /*** Multilevel Inheritance ***/
            //assign value of a, bby calling function of class B and Class A
            //here Class A is inherited on Class B, and Class B in inherited on Class B
            get_b(val_a,val_b); 
            c=val_c;
        }
         
        void disp_c(void)
        {
            //display value of a and b using disp_b()
            disp_b();
            cout << "Value of c: " << c << endl;
        }
};

int main()
{
    //create object of final class, which is Class C
    C objC(100,200,300);
     C objTemp(50,60,70);
     C objNo;
     

    objC.disp_c();
    objTemp.disp_c();
    objNo.disp_c();
     
    return 0;
}


