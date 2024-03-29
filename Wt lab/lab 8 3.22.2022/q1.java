import java.util.Scanner;

abstract class student {
    int rollno, rgno;

    abstract void course();
}

class kiitian extends student {
    Scanner sc = new Scanner(System.in);

    void course() {
        System.out.println("INPUT THE DATA FOR STUDENT");
        System.out.println("ENTER THE REGISTRATION NUMBER OF STUDENT");
        rgno = sc.nextInt();
        System.out.println("ENTER THE ROLL NUMBER OF STUDENT");
        rollno = sc.nextInt();
    }

    void display() {
        System.out.println("THE ROLL NO AND REGISTRATION NUMBER OF THE STUDENT IS\n" + rgno + "\n" + rollno);
    }
}

public class q1 {
    public static void main(String[] args) {
        kiitian Kiit = new kiitian();
        Kiit.course();
        Kiit.display();
    }
}