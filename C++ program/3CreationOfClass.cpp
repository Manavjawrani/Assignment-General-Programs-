#include <iostream>

using namespace std;


class Student
{           private: char name[20];
            int roll;
            
           public: void read();
            void disp();
};
 
void Student::read()
{
        cout<<"\nEnter the student Name :: ";
        cin>>name;
        cout<<"\nEnter the student roll no :: ";
        cin>>roll;
      
} 

 
 void Student :: disp()
{
    cout<<"\nThe Entered Student Details are shown below ::---------- \n";
        cout<<"\nStudent Name :: "<<name<<endl;
        cout<<"\nRoll no   is :: "<<roll<<endl;
       
}

int main()
{ 
   
    Student s1;
    
    s1.read();
    s1.disp();
    
 
    return 0;
}


              












