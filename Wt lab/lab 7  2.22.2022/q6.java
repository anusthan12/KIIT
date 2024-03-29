
class Shinchan {

	
	public void method1()
	{
	System.out.println("Anusthan");
	}
}
class Singh extends Shinchan {

	
	public void method2()
	{
	System.out.println("Singh");
	}
}
public class q6 {

	public static void main(String[] args)
	{
		

		Singh obj = new Singh();
		obj.method2();
		obj.method1();
        
	}
}
