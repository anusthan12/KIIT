import java.io.FileOutputStream;
import java.io.FileInputStream;

public class q3 {
 public static void main(String[] args) {
 try {
 FileInputStream fin1 = new FileInputStream("five.txt");
 FileOutputStream fout1 = new FileOutputStream("six.txt");
 int i = 0, flag = 1;
 char ch;
 while ((i = fin1.read()) != -1) {
 ch = (char) i;
 if (flag == 1) {
  ch -= 32;
 flag = 0;
 }
 if (ch == ' ')
  flag++;
 fout1.write(ch);
 }
 System.out.println();
 fin1.close();
 fout1.close();
 } catch (Exception e) {
 System.out.println(e);
 }
 }
}