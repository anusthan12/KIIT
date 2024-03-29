
import java.util.Scanner; 
   class number{ 
   Scanner sc=new 
    Scanner(System.in); 
    int  size=1000; 
    int []arr= new 
    int[size]; 
    int larg; 
    int small; 
 void read() { System.out.println("ENTER THOSE ELEMENTS TO BE IN ARRAY\n"); 
        for(int i=0;i<size;i++) { 
                arr[i]=sc.nextInt(); 
            }
 System.out.println("ELEMENTS STORED ARE\n"); 
  for(int i=0;i<size;i++) { 
  System.out.print(arr[i]+","); 
 } 
 }
    void swap() { 
        larg=arr[0]; 
        small=arr[1]; 
    int j; 
    for(int i=0;i<size;i++) { 
    for(j=0;j<size;j++) { 
    if(larg<=arr[j]) { 
        larg=arr[j]; 
        }
    if(small>=arr[j]) { 
        small=arr[j]; 
    } 
   } 
  }
    System.out.println("\nSMALLLEST AND GREATEST ARE "+small+" "+larg); 
int temp=larg; 
larg=small;small=temp; 
}
void display() { 
System.out.println("THE SMALLEST AND THE GREATES NUMBERS ARE AFTER SWAPPING ARE "+small+" "+larg); } 
}
public class q7 { 
public static void main(String[] args) { 
System.out.println("ENTER THE SIZE OF THE  ARRAY\n"); 
Scanner sc2=new Scanner(System.in); 
number ob=new number(); 
ob.size=sc2.nextInt(); 
ob.read(); 
ob.swap(); 
ob.display(); 
} 
}
