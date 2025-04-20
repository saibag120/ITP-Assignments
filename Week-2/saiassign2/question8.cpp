#include<iostream>
using namespace std;
sum(int n,int x){
    if(n==0) return x;
    
    x=x+(n%10);
    sum(n/10,x);
}
int main(){
    int n;
    cout<<"enter the no ";
    cin>>n;
    int x=0;
    cout<<"the sum is "<<sum(n,x);
    return 0;
}