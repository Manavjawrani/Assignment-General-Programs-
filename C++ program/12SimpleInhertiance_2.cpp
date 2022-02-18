#include <iostream>
using namespace std;
 
//Base class
class person
{
    private:
        char name[30];
        int  age;
        char gender;
    public:
        void getBasicInfo(void);
        void putBasicInfo(void);
};
 
//function definitions
void person::getBasicInfo(void)
{
    cout << "Enter person's basic information:" << endl;
    cout << "Name?: ";    cin >> name;
    cout << "Age?: ";     cin >> age;
    cout << "Gender?: ";cin >> gender;
}
 
void person::putBasicInfo(void)
{
    cout << "Name: " << name << ",Age: " << age << ",Gender: " << gender << endl;
}
 
//Derived class
class student:public person
{
    private:
        int     totalM;
        float   perc;
        char    grade;
    public:
        void getResultInfo(void);
        void putResultInfo(void);
};
 
//function definitions
void student::getResultInfo(void)
{
    cout << "Enter person's result information:" << endl;
    cout << "Total Marks?: ";     cin >> totalM;
    perc= (float)((totalM*100)/500);
    cout << "Grade?: ";cin >> grade;
}
 
void student::putResultInfo(void)
{
    cout << "Total Marks: " << totalM << ",Percentage: " << perc << ",Grade: " << grade << endl;
}
 
int main()
{
    //create object of derived class
    student std;
 
    //read person basic and result information
    std.getBasicInfo();
    std.getResultInfo();
 
    //print person basic and result information
    std.putBasicInfo();
    std.putResultInfo();
     
    return 0;
}