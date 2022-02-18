 #include<iostream>
 using namespace std;
 class count
 {
     private:
         static int showcount;
     public:
         count()
         {
             showcount++;
         }
     void display()
     {
         cout<<"The number of objects created are: "<<showcount;
     }
 };
 int count::showcount=0;
 int main()
 {
     count c1;
     count c2;
     count c3;
     count c4;
     count c5;
     c2.display();
 }