#include <stdio.h>

char stack[10];
int top=-1;       
 
push(char elem)
{                       // PUSH operation 
    stack[++top]=elem;
}
char pop()
{                      // POP operation 
    return(stack[top--]);
}
int precedence(char symbol)
{               
	if(symbol == '^')
	{
		return(3);
	}
	else if(symbol == '*' || symbol == '/')
	{
		return(2);
	}
	else if(symbol == '+' || symbol == '-')          
	{
		return(1);
	}
	else
	{
		return(0);
	}
}
void main()
{                        
    char infinix[50],postfix[50],ch,ele;
    int i=0,k=0;
    printf("Enter a Infix Expression = ");
    scanf("%s",infinix);
    push('#');
    while( (ch=infinix[i++]) != '\0')
    {
        if( ch == '(') push(ch);
        else
            if(isalnum(ch)) postfix[k++]=ch;
            else
                if( ch == ')')
                {
                    while( stack[top] != '(')
                        postfix[k++]=pop();
                    ele=pop(); //removal
                }
                else
                {       
                    while( precedence(stack[top]) >= precedence(ch) )
                        postfix[k++]=pop();
                    push(ch);
                }
    }
    while( stack[top] != '#')     
        postfix[k++]=pop();
    postfix[k]='\0';         
    printf("\nPostfix Expression =  %s\n",postfix);
}