#include<stdio.h>  
int main()  
{  
    char expression[10]; 
    int x=0, i=0; 
    printf("\nEnter an expression  = ");  
    scanf("%s", expression);  
 
 while(expression[i]!= '\0')  
    {  
   
     if(expression[i]=='(')  
        {  
            x++;    
        }  
  
     else if(expression[i]==')')  
        {  
            x--;   
            if(x<0)  
            break;  
        }  
    i++;       // incrementing of i
    }  
   
    if(x==0)  
    {  
        printf(" The Expression is balanced");  
    }  
    else  
    {  
        printf(" The Expression is unbalanced");  
    }  
    return 0;  
}  