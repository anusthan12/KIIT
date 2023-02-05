#include<iostream>
using namespace std;

int main()
{
    int sum=0,n;
    cout<<"Enter the number till N =  ";

    cin>>n;
    for(int i=1;i<=n;i++)
    sum+=5*i;
    cout<<sum;
    return 0;
}