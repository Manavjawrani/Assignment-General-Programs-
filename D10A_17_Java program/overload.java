import java.util.Scanner;
class Func
{
double area(int r)
{
return(3.14f*r*r);
}
double area(int l, int br)
{
return(l*br);
}
double area(int a,int b,int h)
{

return(((a+b)*h)/2.0);
}
}
class overload
{
public static void main(String args[])
{
int a,b,h,l,r,num;
double ar;
Func f= new Func();
Scanner t=new Scanner(System.in);
System.out.println("Menu");
System.out.println("1.Area of circle");
System.out.println("2.Area of rectangle");
System.out.println("3.Area of trapezium");
System.out.println("Enter your choice");
num=t.nextInt();
switch(num)
{
case 1:{
System.out.println("Enter radius");
r=t.nextInt();
ar=f.area(r);
System.out.println("Area of the circle is "+ar);
break;
}
case 2:{
System.out.println("Enter the length and breadth");
l=t.nextInt();
b=t.nextInt();
ar=f.area(l,b);
System.out.println("Area of rectangle is "+ar);
break;
}
case 3:{
System.out.println("Enter the parellal sides and height of trapezium");
a=t.nextInt();
b=t.nextInt();
h=t.nextInt();
ar=f.area(a,b,h);
System.out.println("Area of trapezium is"+ar);
break;
}
}

}
}