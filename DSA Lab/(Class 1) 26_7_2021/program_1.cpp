#include<iostream>
using namespace std;

int addition(int a, int b, int c);
int main(){

    float num1,num2,num3,add;

    cout<<"Enter any threee numbers =\n";
    cin>>num1>>num2>>num3;

    add=addition(num1,num2,num3);

    cout<<"Adition = "<<add;

return 0;
}

int addition(int a, int b, int c){
    float sum =(a+b+c);

    return sum;
}