interface CollegeData
{
    public void collegeDetail(); 
    public void studentData();

}

interface HostelData
{
    public void hostelDetail(); 
    public void studentRecord();
}

public class StudentRecord implements CollegeData, HostelData
{ 
    @Override
    public void hostelDetail() 
    {
        System.out.println("Hostel Name : RAMA");
        System.out.println("Hostel location : KUK");
    }

    @Override
    public void studentRecord() 
    {
        System.out.println("Student selected on based : Percentage, Financial condition");
    }

    @Override
    public void collegeDetail() 
    {
        System.out.println("College Name : DCSA");
        System.out.println("College Grade : A");
        System.out.println("University of College : KUK");
    }

    @Override
    public void studentData() 
    {
        System.out.println("courses of Student : MCA, MTECH, MBA, BCA");
    } 
    
    public static void main (String[] args) 
    { 
       StudentRecord obj = new StudentRecord();
       obj.collegeDetail();
       obj.studentData();
       obj.hostelDetail();
       obj.studentData();
    }
}