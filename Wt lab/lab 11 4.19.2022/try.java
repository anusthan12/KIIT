import java.util.*;

public class try {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a string :");
        String s1 = sc.nextLine();

        System.out.println("Replace : " + s1.replace("university", "college"));
        System.out.println("Trim : " + s1.trim());
        String[] s2 = s1.split(" ");
        System.out.println("Split 1 : " + s2[0]);
        System.out.println("Split 2 : " + s2[1]);
        System.out.println("charAt : " + s1.charAt(0));
        System.out.println("substring : " + s1.substring(0, 5));
    }
}