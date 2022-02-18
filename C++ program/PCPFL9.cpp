#include <iostream>
#include <stdexcept>
using namespace std;
 
int main (void)
 {
   int Sum=0, num;
   cout<<"Please enter number you wish to add(-99 to exit): "<<endl;   // taking input from user 
   while( true ) 
   { 
     try             //using try block to check error
    { 
         cin>>num;
         if(num == -99)      //checking that input by user  is valid or not
              throw -99;       //using throw block to transfer error to catch block
         Sum+=num;
      }

     

     catch(...)                                              //catches the error thrown by try block
     {
         cout <<"Aborting the program..."<<endl;               //Showing error;
         break;
      }
  }
cout << "Sum is: " << Sum << endl;        // if condition is satisfied the output would be printed
return 0;
 }