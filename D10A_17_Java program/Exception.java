import java.util.Scanner;
class Exception
{
public static void main(String args[])
{
int a,b,res;
Scanner sc=new Scanner(System.in);
System.out.println("Enter two numbers");
a=sc.nextInt();
b=sc.nextInt();
try
{
res=a/b;
System.out.println("The Quotient="+res);

}
catch(ArithmeticException ae)
{
System.out.println("Exception has occurred. You have entered the divisor as zero");
}
finally
{
System.out.println("In Finally Block");
}
}
}