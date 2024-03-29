
import java.util.Scanner;
class rect{
int l;
int b;
void display() {
System.out.println("THE AREA IS "+l*b);
System.out.println("THE PERIMETER IS "+2*(l+b));
}
}
public class q4 {
public static void main(String[] args) {
Scanner sc=new Scanner(System.in);
rect ob=new rect();
System.out.println("PLEASE ENTER THE LENGTH AND BREADTH OF THE RECTANGLE\n");
ob.l=sc.nextInt();
ob.b=sc.nextInt();
ob.display();
}
}