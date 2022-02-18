import java.util.Scanner;
class parent
{
public float volume(float l,float b,float h)
{
float vol=l*b*h;
return vol;
}
public float circ(float rad)

{
float arecirc=(float)3.14*rad*rad;
return arecirc;
}
}
class child1 extends parent
{
public float area(float l,float b)
{
float are=l*b;
return are;
}
}
class child2 extends parent
{
public float perimeter(float l,float b)
{
float per=2*(l+b);
return per;
}
}
class heirarchial
{
public static void main(String args[])
{
int a;
do{
float l,b,h,ans,r;
Scanner sc=new Scanner(System.in);
child1 c1=new child1();
child2 c2=new child2();
System.out.println("Menu");
System.out.println("1.Volume of cuboid");
System.out.println("2.Area of rectangle");
System.out.println("3.Perimeter of rectangle");
System.out.println("4.Area of circle");
System.out.println("5.exit");
System.out.println("Enter your choice");
a=sc.nextInt();
switch(a)
{
case 1:
System.out.println("Enter length breadth and height");

l=sc.nextFloat();
b=sc.nextFloat();
h=sc.nextFloat();
ans=c1.volume(l,b,h);
System.out.println("The volume is "+ans);
break;
case 2:
System.out.println("Enter length and breadth of rectangle");
l=sc.nextFloat();
b=sc.nextFloat();
ans=c1.area(l,b);
System.out.println("The area is "+ans);
break;
case 3:
System.out.println("Enter the length and breadth of rectangle");
l=sc.nextFloat();
b=sc.nextFloat();
ans=c2.perimeter(l,b);
System.out.println("The perimeter is "+ans);
break;
case 4:
System.out.println("Enter the radius of circle");
r=sc.nextFloat();
ans=c2.circ(r);
System.out.println("The area of circle is "+ans);
break;
case 5:
break;
default:
System.out.println("Invalid choice");
}
}while(a!=5);
}
}