
import java.util.Scanner;
class shape{
Scanner sc=new Scanner(System.in);
double area;
void showarea() {
System.out.println("THE AREA OF THE FIGURE WOULD BE "+area);
}
}
class circle extends shape{
double r;
circle(){
System.out.println("ENTER THE RADIUS OF THE CIRCLE");
r=sc.nextDouble();
}
void calculate() {
area=3.14*r*r;
}
void display() {
showarea();
}
}
class rectangle extends shape{
int l;
int b;
rectangle(){
System.out.println("ENTER THE LENGTH AND BREADTH OF THE RECTANGLE ");
l=sc.nextInt();
b=sc.nextInt();
}
void calculate() {
area=l*b;
}
void display() {
showarea();
}
}
public class q4 {
public static void main(String[] args) {
circle aCircle=new circle();
aCircle.calculate();
aCircle.display();
rectangle aRectangle=new rectangle();
aRectangle.calculate();
aRectangle.display();
}
}