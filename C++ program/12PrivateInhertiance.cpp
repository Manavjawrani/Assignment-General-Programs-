#include <iostream>
using namespace std;
 
class A
{
    private:
        int a;
    protected:
        int x;  //can access by the derived class
    public:
        void setVal(int v)
        {
            x=v;    
        }
};
 
class B:private A
{
    public:
        void printVal(void)
        {
            setVal(10); //accessing public member function here
		//protected data member direct access here
            cout << "value of x: " << x << endl; 
        }
};
 
int main()
{
        B objB; //derived class creation
        objB.printVal(10);
        return 0;
}