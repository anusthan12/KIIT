import java.util.*;

class q5{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Person p[] = new Person[2];
        for (int i = 0; i < 2; i++) {
            String c = sc.nextLine();
            System.out.println("\nEnter name of the " + i + " person");
            String name = sc.nextLine();
            System.out.println("Enter aadhar number of the " + i + " person");
            int aadhar = sc.nextInt();
            System.out.println("Enter account number of  the " + i + " person");
            int acc_no = sc.nextInt();
            System.out.println("Enter balance of  the " + i + " person");
            int balance = sc.nextInt();
            p[i] = new Person(name, aadhar, acc_no, balance);
            p[i] = new Person(name, aadhar, acc_no, balance);
        }
        for (int i = 0; i < 2; i++) {
            p[i].disp();
            System.out.println();
        }
    }
}

class Account {
    int acc_no;
    int bal;

    Account(int acc_no, int balance) {
        this.acc_no = acc_no;
        this.bal = balance;
    }

    void disp() {
        System.out.println("Account number is " + acc_no);
        System.out.println("Balance is " + bal);
    }
}

class Person extends Account {
    String name;
    int aadhar_no;

    Person(String n, int a, int acc, int bal) {
        super(acc, bal);
        name = n;
        aadhar_no = a;
    }

    void disp() {
        System.out.println("Name is " + name);
        System.out.println("Aadhar number is " + aadhar_no);
        super.disp();
    }
}