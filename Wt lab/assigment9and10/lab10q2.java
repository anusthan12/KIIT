import java.io.FileInputStream;

public class lab10q2 {
 public static void main(String[] args) {
  try {
   FileInputStream fin1 = new FileInputStream(
  "3.txt");
   FileInputStream fin2 = new FileInputStream(
   "4.txt");
   int i = 0, j = 0, count = 0;
   while (((i = fin1.read()) != -1) && ((j = fin2.read()) != -1)) {
   if (i != j) {
    System.out.println(count);
    break;
   }
   count++;
   }
   fin1.close();
   fin2.close();
  } catch (Exception e) {
   System.out.println(e);
  }
 }
}