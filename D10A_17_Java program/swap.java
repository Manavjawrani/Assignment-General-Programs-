class swap
{ 
public static void main(String[] args)
{
int x,y,temp;
x=Integer.parseInt(args[0]);
y=Integer.parseInt(args[1]);
temp=x; x=y; y=temp;
System.out.println("the swapped numbers are=" +x+"and" +y);
}
}