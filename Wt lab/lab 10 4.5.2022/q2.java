

import java.util.Scanner;

public class q2 {
    public static void main(String[] args)
    {
        Scanner s=new Scanner(System.in);
        String a=s.nextLine();
        System.out.println("uper case : "+ a.toUpperCase());
        System.out.println("lower case : "+ a.toUpperCase());
        StringBuilder input1 = new StringBuilder();
        input1.append(a);
        System.out.println("after reversing "+ input1.reverse());

        System.out.println("enter second string : ");
        Scanner s1=new Scanner(System.in);
        String b=s1.nextLine();

        System.out.println();
        String c1=new String(a);
        String c2=new String(b);
        System.out.println(c1.equals(c2));
        System.out.println(c1.equalsIgnoreCase(c2));




        StringBuffer newString = new StringBuffer(c1);
        System.out.println("enter sttring to insert ");
        Scanner s3=new Scanner(System.in);
        String c=s3.nextLine();
        System.out.println("enter index no. string insert");
        int ind=s3.nextInt();
        
        newString.insert(ind, c);
        System.out.println("after inserting " + newString);

        System.out.println("after concatination ");
        a=a.concat(b);
        System.out.println(a);




    }
}