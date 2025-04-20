#include<iostream>
using namespace std;
sum(int arr[],int n,int x,int y){
    if(y==n) return x;
    x+=arr[y];
    sum(arr,n,x,y+1);
}
int main(){
    int n;
    cout<<"enter the no of elements in the array ";
    cin>>n;
    int arr[n];
    cout<<endl<<"enter the array ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x=0;
    int y=0;
    cout<<sum(arr,n,x,y);
    return 0;
}