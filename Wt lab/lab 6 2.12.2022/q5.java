
import java.util.Scanner;
class student{
int roll_no;
String name;
float cgpa;
void input() {
Scanner sc= new Scanner(System.in);
System.out.println("ENTER THE ROLL OF THE STUDENT");
roll_no=sc.nextInt();
System.out.println("ENTER THE NAME OF THE STUDENT");
name=sc.next();
System.out.println("ENTER THE CGPA OF THE STUDENT");
cgpa=sc.nextFloat();
}
void display() {
System.out.println("ROLL IS "+roll_no);
System.out.println("NAME IS "+name);
System.out.println("CGPA IS "+cgpa);
}
}
public class q5 {
public static void main(String[] args) {
int n;
int flag=0;
System.out.println("ENTER THE NUMBER OF STUDENTS IN CLASS");
Scanner sc1=new Scanner(System.in);
n=sc1.nextInt();
System.out.println(n);
student stud[]=new student[5];
for(int i=0;i<n;i++) {
stud[i]=new student();
stud[i].input();
}
for(int i=0;i<n;i++) {
stud[i].display();
}
float smallest=stud[0].cgpa;
for(int i=0;i<n;i++) {
if(smallest>=stud[i].cgpa) {
smallest=stud[i].cgpa;
flag=i;
}
}
System.out.println("THE STUDENT GOT THE" +flag+"LOWEST CGPA");
stud[flag].display();
}
}