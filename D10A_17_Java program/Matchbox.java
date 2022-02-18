class Box
{

double width;
double height;
double depth;
Box() {}
Box(double w, double h, double d)
{
width=w; height=h; depth=d;
}
void getVolume()
{System.out.println("Volume is"+ width*height*depth);
}
}
public class Matchbox extends Box
{double weight;
Matchbox() {}
Matchbox(double w, double h, double d, double m)
{super(w, h, d); weight=m;
}
public static void main(String args[])
{
Matchbox mb1=new Matchbox(10,10,10,10);
mb1.getVolume();
System.out.println("Width of Matchbox 1 is "+mb1.width);
System.out.println("height of Matchbox 1 is "+mb1.height);
System.out.println("depth of Matchbox 1 is "+mb1.depth);
System.out.println("weight of Matchbox 1 is "+mb1.weight);
}
}