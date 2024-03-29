import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Scanner;
public class Q6 {
         public static void main(String[] args) throws IOException { 
  BufferedReader br=new BufferedReader(new InputStreamReader(System.in)); {
  int[][] arr1=new int[3][3];
  int i=0,j=0,sum=0;
    Scanner sc= new Scanner(System.in); 
  System.out.println("ENTER THE ELEMENTS OF THE ARRAY");
   for(i=0;i<3;i++) {  
       for(j=0;j<3;j++) {
            arr1[i][j]=Integer.parseInt(br.readLine()); 
         }
     }
     System.out.println("THE DATA YOU ENTERED SO MATRIX WILL BE :- \n");
  for(i=0;i<3;i++) { 
     for(j=0;j<3;j++) {
          System.out.print(arr1 [i] [j]);
          
         }
         System.out.println(" "); 
        }
        System.out.println("\n TAKING SUM OF LEFT DIAGONAL");

        for(i=0,j=0;i<3;i++,j++) {
         sum=sum+arr1[i][j];
         }
         System.out.println(sum);
          sum=0;
           System.out.println("TAKING THE SUM OF RIGHT DIAGONAL"); 
           for(i=0,j=2;i<3;i++,j--) {
           sum=sum+arr1[i][j]; 
            }
            System.out.println(sum); 
        }
     }
}