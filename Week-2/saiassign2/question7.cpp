//the fibonacci series i have considered is 0 1 1 2 3 5 8 13 21 34//
#include<iostream>
using namespace std;
fibo(int n){
    if(n==1) return 0;
    if(n==3||n==2) return 1;
    return fibo(n-1)+fibo(n-2);
}
int main(){
    int n;
    cout<<"enter the no of fibonacci you want to print ";
    cin>>n;
    cout<<fibo(n);
    return 0;
}
