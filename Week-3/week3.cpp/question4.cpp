#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"enter no of elements you want to print ";
    cin>>n;
    cout<<"enter the array ";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"before rotating ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int a;
    cout<<"enter the no of position you want to rotate"<<endl;
    cin>>a;
    vector<int>v1;
    for(int i=0;i<n;i++){
        v1.push_back(arr[i]);
    }
    for(int i=0;i<a;i++){
        int last=v1.back();
        v1.insert(v1.begin(),last);
        v1.erase(v1.begin()+n);
    }
    cout<<"after rotating"<<endl;
    for(auto it:v1){
        cout<<it<<" ";
    }

    return 0;
}