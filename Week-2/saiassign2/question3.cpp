#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter no of elements ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"the first array is ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    int b[n];
    for(int i=0;i<n;i++){
        b[i]=a[i];
    }
    cout<<"the second array is"<<endl;
    for(int i=0;i<n;i++){
        cout<<b[i]<<" ";
    }

    return 0;
}