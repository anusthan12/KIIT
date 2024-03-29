import java.io.*;  
import java.util.*;  

class q3 {  
 public static void main(String arg[]) throws Exception {  
  try (Scanner sc = new Scanner(System.in)) {
    System.out.print("Provide source file name :");  
      String sfile = sc.next();  
      System.out.print("Provide destination file name :");  
      String dfile = sc.next();  
      FileReader fin = new FileReader(sfile);  
      FileWriter fout = new FileWriter(dfile, true);  
      int c;  
      while ((c = fin.read()) != -1) {  
       fout.write(c);  
      }  
      System.out.println("Copy finish...");  
      fin.close();  
      fout.close();
    }  
}  
}
/*
<applet code="q3" width=200 height=200>
</applet>
*/