#include <stdio.h>  //By Anusthan Singh (20051337)
int fact(int);
void main()
{
int no,factorial;
printf("Enter any number for calculating factorial\n");
scanf("%d",&no);

factorial=fact(no);
printf("It factorial is = %d\n",factorial);
}
int fact(int n)
{
int i,f=1;
for(i=1;i<=n;i++)
{
f=f*i;
}
return f;
}

/*#include<iostream>
using namespace std; //By Anusthan Singh (20051337)

int factorical(int a);
int main()
{
     int fact=1,n;  
     cout<<"Enter any Number =\n";    
     cin>>n; 

     fact= factorical(n);   

    cout<<"Factorial of  is= "<<fact<<endl;  
  return 0;  
}
int factorical(int a){
    int i,fact=1;
for(i=1;i<=a;i++){    
      fact=fact*i;    
     }  
     return fact;  
}*/