public class CountObject  
{  
private static int counting;  
public CountObject()   
{  
counting++;  
}  
public static void main(String args[])   
{  
CountObject ob_name_A = new CountObject();  
CountObject ob_name_B = new CountObject();  
CountObject ob_name_C = new CountObject();  
CountObject ob_name_D = new CountObject();  
CountObject ob_name_E = new CountObject();
CountObject ob_name_F = new CountObject();
CountObject ob_name_G = new CountObject();  
 
System.out.print("Total Number of Objects: " + CountObject.counting);  
}  
}  