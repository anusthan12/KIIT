package general;
import java.util.Scanner;
public class employee{
   protected int empid;
   private String ename;
   public int basic;
   public float earn;
   public void get(){
       Scanner s=new Scanner(System.in);  
       System.out.println("Enter the Employee Name");
        ename=s.nextLine();
        System.out.println("Enter the Employee ID");
        empid=s.nextInt();
        System.out.println("Enter the basic salary of the employee");
        basic=s.nextInt();
   }
   public void earning(){
       earn=basic+0.80f*basic+0.15f*basic;
       System.out.println("The  employee id is: "+empid+" " +"The basic salary of the employee is "+basic);
   }
}