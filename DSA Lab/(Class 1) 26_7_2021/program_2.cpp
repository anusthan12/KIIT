#include<iostream>
using namespace std;

int factorical(int a);
int main()
{
     int fact=1,n;  
     cout<<"Enter any Number =\n";    
     cin>>n; 

     fact= factorical(n);   

    cout<<"Factorial of  is= "<<fact<<endl;  
  return 0;  
}
int factorical(int a){
    int i,fact=1;
for(i=1;i<=a;i++){    
      fact=fact*i;    
     }  
     return fact;  
}