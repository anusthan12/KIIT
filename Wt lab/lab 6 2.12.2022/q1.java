
class Box
{
	double width, height, depth;

	Box(double w, double h, double d)
	{
		width = w;
		height = h;
		depth = d;
	}
	double volume()
	{
		return width * height * depth;
	}
}


public class q1
{
	public static void main(String args[])
	{
		
		Box mybox = new Box(100, 200, 50);
	
		double vol;

		vol = mybox.volume();
		System.out.println(" Volume of mybox is " + vol);

		
		
	}
}
