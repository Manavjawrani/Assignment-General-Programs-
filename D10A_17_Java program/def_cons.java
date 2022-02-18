class def_cons{
/*This is my default constructor. A constructor does
* not have a return type and it's name
* should exactly same as class name
*/
def_cons(){
System.out.println("Default constructor");
}

public void mymethod()
{
System.out.println("Void method of the class");
}
public static void main(String args[]){
/* Creating object of class using default constructor
* (new def_cons()) so default constructor would be
* invoked
*/
def_cons obj = new def_cons();
obj.mymethod();
}
}