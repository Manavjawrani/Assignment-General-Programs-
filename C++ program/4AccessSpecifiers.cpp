#include <iostream>

using namespace std;

class Student
{   private:char name[20];
            int roll;
            
     private:void read()
            {
            cout<<"\nEnter the student Name :: ";
            cin>>name;
            cout<<"\nEnter the student roll no :: ";
            cin>>roll;
      
            } 
    public:void disp();
};
 void Student :: disp()
{       //to call private memebers we need public methods
        //implicit object calling it
        read();
    
        cout<<"\nThe Entered Student Details are shown below ::---------- \n";
        cout<<"\nStudent Name :: "<<name<<endl;
        cout<<"\nRoll no   is :: "<<roll<<endl;
       
}

int main()
{ 
   // classname objajectname;
    Student s1;
    
    s1.disp();
    
    return 0;
}


