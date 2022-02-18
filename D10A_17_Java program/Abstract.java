abstract class Bank{    
    abstract int getInterestRate();    
}    
class Citi extends Bank{    
    int getInterestRate(){return 7;}    
}
class HSBC extends Bank{    
    int getInterestRate(){return 6;}    
}    
     
class Abstract{    
    public static void main(String args[]){    
        Bank b;  
        b = new Citi ();      
        System.out.println("Citi Rate of Interest is: "+b.getInterestRate()+"%");    
        b = new HSBC ();       
        System.out.println("HSBC Rate of Interest is: "+b.getInterestRate()+"%");    
    }
}    