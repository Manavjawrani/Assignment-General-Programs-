#include <iostream> 
using namespace std; 
class Student 
{ 
    private: 
    char name[20]; 
    int roll; 
    int subject1;
    int subject2;
    int subject3;
    public: 
    void read(); 
    void disp(); 
    void percentage();
};

void Student::read() 
{ 
 cout<<"\nEnter the student Name : "; 
 cin>>name; 
 cout<<"\nEnter the student roll no : "; 
 cin>>roll; cout << "\nEnter marks of Subject 1 : ";
cin >> subject1;
cout << "\nEnter marks of Subject 2 : ";
cin >> subject2;
cout << "\nEnter marks of Subject 3 : ";
cin >> subject3;
}

void Student :: disp() 
{ 
 cout<<"\nThe Entered Student Details are shown below ::---------- \n";  
 cout<<"\nStudent Name :: "<<name<<endl; 
 cout<<"\nRoll no is :: "<<roll<<endl; 
  
}

void Student::percentage()
{
    cout << "Percentage : " << (subject1+subject2+subject3)*100/300 << endl;
}

int main() 
{ 
   Student s1;
   s1.read();
   s1.disp();
   s1.percentage();
   cout << endl;
   return 0;
}
