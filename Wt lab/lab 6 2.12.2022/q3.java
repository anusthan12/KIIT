
import java.util.Scanner;
class shape{
void area(float r) {
System.out.println("THE AREA OF CIRCLE IS"+(3.14*r*r));
}
void area(int s) {
System.out.println("THE AREA OF THE SQUARE IS "+(s*s));
}
void area(float b,float h) {
System.out.println("THE AREA OF THE TRIANGLE IS "+(0.5*b*h));
}
}
public class q3 {
public static void main(String[] args) {
int si,ba;
float r,perp;
Scanner sc=new Scanner(System.in);
shape oShape=new shape();
System.out.println("ENTER THE RADIUS ");
r=sc.nextFloat();
oShape.area(r);
System.out.println("ENTER THE SIDE OF THE SQAURE");
si=sc.nextInt();
oShape.area(si);
System.out.println("ENTER THE BASE AND PERPENDICULAR OF THE TRIANGLE");
ba=sc.nextInt();
perp=sc.nextFloat();
oShape.area(ba, perp);
}
}