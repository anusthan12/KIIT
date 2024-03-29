import java.io.FileOutputStream;
import java.io.FileInputStream;

public class q5 {
 public static void main(String[] args) {
  try {
   FileInputStream fin = new FileInputStream(
    "one.txt");
   FileOutputStream fout = new FileOutputStream(
    "two.txt");
   int i = 0;
   while ((i = fin.read()) != -1) {
 fout.write((char) i);
   }
   fin.close();
   fout.close();
  } catch (Exception e) {
 System.out.println(e);
  }
 }
}