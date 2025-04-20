#include<iostream>
#include<vector>
#include<set>
using namespace std;
int main(){
    int n;
    cout<<"enter no of elements in the array "<<endl;
    cin>>n;
    int arr[n];
    vector<int>v1;
    set<int>v2;
    cout<<"enter the array "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        v1.push_back(arr[i]);
        v2.insert(arr[i]);
        
    }
  
    for(auto it:v2){
        cout<<it<<" ";
    }
    
    return 0;
}