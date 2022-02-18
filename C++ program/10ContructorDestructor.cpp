
#include<iostream>
using namespace std;
 
class stu
{
                private:
                    char name[20];
                        int roll;
 
                public:
                    stu ();//Constructor
                        ~stu();//Destructor
                        void read();
                        void disp();
};
 
stu :: stu()
{
        cout<<"\nThis is Student Details constructor called..........."<<endl;
}
 
void stu :: read()
{
        cout<<"\nEnter the student Name :: ";
        cin>>name;
        cout<<"\nEnter the student roll no :: ";
        cin>>roll;
      
}
 
void stu :: disp()
{
    cout<<"\nThe Entered Student Details are shown below ::---------- \n";
        cout<<"\nStudent Name :: "<<name<<endl;
        cout<<"\nRoll no   is :: "<<roll<<endl;
       
}
 
stu :: ~stu()
{
        cout<<"\n\nStudent Detail is Closed.............\n";
}
 
 
int main()
{
    stu s;
    s.read ();
    s.disp ();
 
    return 0;
}