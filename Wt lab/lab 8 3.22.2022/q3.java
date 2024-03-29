import  java.util.Scanner;
interface salary
{
   public  void  earnings(); 
   public  void  charges_deduction(); 
   public  void  bonus();
}

abstract  class  Manager  implements  salary
{
  double  earning,deduction;
  public  void  earnings()
 {
   System.out.println("Manager  implements  the  method of earnings.");
 }
 public  void  charges_deduction()
 {
  System.out.println("Manager  implemnets  the  method of  deductions.");
 }
}

class  Substaff  extends  Manager  implements  salary
{
  double  b_salary,bonus; 
  Substaff(int bs)
  {
    b_salary=bs;
  }
  public  void  calculate()
  {
     earning=b_salary+(0.8*b_salary)+(0.15*b_salary); 
     deduction=0.12*b_salary;
     bonus=0.5*b_salary;
  }
  public  void  bonus()
  {
     System.out.println("Substaff  implementing  the  method  bonus.");
  }
  public  void  display()
  {
    System.out.println("Earning  of  the  employee  :  "+earning); 
    System.out.println("Deduction  of  the  employee  :  "+deduction); 
    System.out.println("Bonus  of  the  employee  :  "+bonus);
  }
}

public  class  q3  
{
  public  static  void  main(String args[])  
  { 
     Scanner  sc=new  Scanner(System.in); 
     int  a;
     System.out.println("Enter  the  basic  salary:-"); 
     a=sc.nextInt();

     Substaff  st=new  Substaff(a); 
     st.calculate();
     st.bonus();
     st.display();
   }

}