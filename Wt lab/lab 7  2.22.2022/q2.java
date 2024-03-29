
import java.util.Scanner;
class plate{
Scanner sc=new Scanner(System.in);
int l,b;
plate(){
System.out.println("ENTER THE LENGTH AND BREADTH");
l=sc.nextInt();
b=sc.nextInt();
}
}
class box extends plate{
int heig;
box(){
System.out.println("ENTER THE IT'S HEIGHT");
heig=sc.nextInt();
}
}
class woodbox extends box{
int thickness;
woodbox(){
System.out.println("ENTER THE IT'S THICK");
thickness=sc.nextInt();
System.out.println("THE LENGTH,BREADTH,HEIGHT,THICK ENTERED IS "+l+","+b+","+heig+","+thickness);
}
}
public class q2 {
public static void main(String[] args) {
woodbox anusthansWoodbox=new woodbox();
}}