import java.util.Arrays;
import java.util.Scanner;

public class q1_AIOBE {
   public static void main(String args[]) {
      int[] Array = {234, 43, 65, 70, 68, 34, 33};
      System.out.println("Elements in the array are: ");
      System.out.println(Arrays.toString(Array));
      Scanner sc = new Scanner(System.in);
      System.out.println("Enter the index of the required element :");
      try {
         int element = sc.nextInt();
         System.out.println("Element in the given index is : "+Array[element]);
      } catch(ArrayIndexOutOfBoundsException e) {
         System.out.println("The index you have entered is invalid, Not possible");
         System.out.println("Please enter an index number between 0 and 6");
      }
   }
}