#include<iostream>
using namespace std;
swap(int* x,int* y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
void sort(int drr[],int a){

    for(int i=0;i<a-1;i++){
        for(int j=i+1;j<a;j++){
            if(drr[j]<drr[i]){
            swap(&drr[i],&drr[j]);
            }
        }
    } 
    for(int i=0;i<a;i++){
        cout<<drr[i]<<" ";
    }
}
void reverse(int crr[],int p){
    int start=0;
    int end=p-1;
    int temp;
    while(start<end){
        temp=crr[start];
        crr[start]=crr[end];
        crr[end]=temp;
        start++;
        end--;
    }
    for(int i=0;i<p;i++){
        cout<<crr[i]<<" ";
    }
}
int main(){
    int n;
    cout<<"enter the no of elements in first array ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int o;
    cout<<"enter the no of elements in second array ";
    cin>>o;
    int brr[o];
    for(int i=0;i<o;i++){
        cin>>brr[i];
    }
    int p=n+o;
    int crr[p];
    for(int i=0;i<p;i++){
        if(i==n||i>n) crr[i]=brr[i-n];
        else crr[i]=arr[i];
    }
    cout<<"after merging"<<endl;
    for(int i=0;i<p;i++){
        cout<<crr[i]<<" ";
    }
    cout<<endl;
    cout<<"the reverse order of the array is"<<endl;
    reverse(crr,p);
    int a;
    cout<<"enter the no of elements in array ";
    cin>>a;
    int drr[a];
    for(int i=0;i<a;i++){
        cin>>drr[i];
    }
    cout<<"your array is ";
    for(int i=0;i<a;i++){
        cout<<drr[i]<<" ";
    }
    cout<<endl;
    sort(drr,a);
    
    return 0;
}