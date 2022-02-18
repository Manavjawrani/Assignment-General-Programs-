
#include<iostream>
#include<cstring>
using namespace std;
 
class stu
{
                private:
                char name[20];
                int roll;

                public:
                        stu ();//Constructor
                        stu(int );
                        stu(char [],int );
                        ~stu();//Destructor
                        void read();
                        void disp();
};
 
stu :: stu() //non parameterized constructor, default constructor
{      
        roll =11; 
        cout<<"\nThis is Student Details constructor called..........."<<endl;

}

stu :: stu(int r) // parameterized constructor
{      
        roll =r; 
        cout<<"\nThis is Student Details constructor called..........."<<endl;

}

stu:: stu(char n[10],int r)// parameterized constructor
{  strcpy(name,n);
   roll=r;

}
 
void stu :: read()
{
        cout<<"\nEnter the student Name :: ";
        cin>>name;
        cout<<roll<<"initial value"<<endl;
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

    stu s1(10), s2(20), s3("ppoja",30),s4;

    s1.disp();
	s2.disp();
	s3.disp();
    s4.disp ();

    s1.read();
	s2.read();
	s4.read();
	
	 s1.disp();
	s2.disp();
	s3.disp();
    s4.disp ();
	

    return 0;
}


