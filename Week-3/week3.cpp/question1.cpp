#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v1;
    vector<int>v2;
    vector<int>v3;
    int n;
    cout<<"enter no of element in an array";
    cin>>n;
    int x;
    cout<<"enter the array";
    for(int i=0;i<n;i++){
        cin>>x;
        if(x>=0) v2.push_back(x);
        else v3.push_back(x);
    }
    int y=0;
    v3.insert(v3.begin(),v2.begin(),v2.end());
    for(auto it:v3){
        cout<<it<<" ";
    }

    return 0;
}