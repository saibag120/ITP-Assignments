#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout<<"enter no of elements";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count=1;
    int x=1;
    vector<int>v;
    for(int i=0;i<n-1;i++){
        count=1;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]) count++;
        }
        if(count>x){
            x=count;
            v.clear();
            v.push_back(arr[i]);
        } 
        else if(count==x){
            v.push_back(arr[i]);
        }
    }
    
    for(auto it:v){
        cout<<it<<" ";
    }
    if(v.size()+1==n){
        cout<<arr[n-1];
    }
    return 0;
}