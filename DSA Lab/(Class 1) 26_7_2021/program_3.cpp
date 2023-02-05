#include<iostream>
using namespace std;

int even_odd(int num);
int main(){
    int n, ans;
    cout<<"Enter any number= \n";
    cin>>n;

    ans= even_odd(n);
    cout<<ans<<"\n (Where 0 represent even & -1 represent odd) ";

    return 0;
    }

    int even_odd(int num){
        if(num%2==0){
            return 0;
        }
        else
        return -1;
    }