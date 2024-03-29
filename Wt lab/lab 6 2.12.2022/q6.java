import java.util.Scanner;

public class q6
{
    public static void main(String args[]) {
        
        Scanner in = new Scanner(System.in);
        
        System.out.println("Press c for area of circle");
        System.out.println("Press s for area of square");
        System.out.println("Press r for area of rectangle");
        System.out.print("Enter your choice: ");
        char choice = in.next().charAt(0);
        
        switch(choice) {
            case 'c':
                System.out.print("Enter radius of the circle: ");
                double r = in.nextDouble();
                double circle = (22 / 7.0) * r * r;
                System.out.println("Area of circle = " + circle);
                break;
                
            case 's':
                System.out.print("Enter side of the square: ");
                double side = in.nextDouble();
                double square = side * side;
                System.out.println("Area of square = " + square);
                break;
                
            case 'r':
                System.out.print("Enter length of the rectangle: ");
                double l = in.nextDouble();
                System.out.print("Enter breadth of rectangle: ");
                double b = in.nextDouble();
                double ra = l * b;
                System.out.println("Area of rectangle = " + ra);
                break;
                
            default:
                System.out.println("Oops Something went wrong!");
        }
    }
}