import java.io.BufferedReader; 
import java.io.IOException; 
import java.io.InputStreamReader; 
public 
class q5 { 
public static void main(String[] args)throws 
IOException {
BufferedReader br= new BufferedReader(new InputStreamReader(System.in)); 
int size; 
System.out.println("THE NUMBER OF ELEMENTS YOU WANT TO ENTER IN ARRAY\n");

size=Integer.parseInt(br.readLine()); 
int [] arr=new int[size]; 
int [] arr2=new int[size]; 

int i,j,count;
 
System.out.println("ENTER THE ELEMENTS OF THE ARRAY\n"); 
for(i=0;i<size;i++) { 
arr[i]=Integer.parseInt(br.readLine()); 
arr2[i]=-1; 
}
for 
(i=0;i<size;i++) 
{ 
count = 1; 
for(j = i + 1; j < size; j++) 
{
if(arr[i] == arr[j]) 
{ 
count++; 
arr2[j] = 0; 
} 
}
if(arr2[i] != 0){ 
arr2[i] =count; 
} 
}
System.out.println("\n OCCURANCE OF THE ELEMENTS : \n"); 
for (i = 0; i < size; i++) 
{ 
if(arr2[i] != 0) 
{ 
System.out.println("THE ELEMENT "+arr[i] +" OCCURING THIS TIMES\n"+arr2[i]); 
} 
} 
} 
}
