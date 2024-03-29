import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader; 
  public class q3 {
  public static void main(String[] args) throws IOException 
 { BufferedReader 
        br=new BufferedReader(new InputStreamReader(System.in));
    int n,temp; 
     System.out.print("ENTER THE NUMBER OF ELEMENTS ARRAY = "); 
    n=Integer.parseInt(br.readLine()); 
    int[] arr=new int[n];
    System.out.println("ENTER THE ELEMENTS OF THE ARRAY");
    int i,j;
     for(i=0;i<n;i++)
      { arr[i]=Integer.parseInt(br.readLine()); }
     System.out.print("ELEMNTS BEFORE SORTING\n");
      for(i=0;i<n;i++)
       { 
           System.out.print(arr[i]+","); 
    }
     for(i=0;i<n;i++) 
     { for(j=0;j<n-i-1;j++) 
        { if(arr[j]>arr[j+1])
             { temp=arr[j];
                 arr[j]=arr[j+1];
                  arr[j+1]=temp; }

} }System.out.println("\nTHEREFORE THE ELEMNTS AFTER SORTING = ");
 for(i=0;i<n;i++)
  { System.out.print(arr[i]+","); 
}
 }
 }