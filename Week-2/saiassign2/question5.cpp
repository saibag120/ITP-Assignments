#include<iostream>
#include<queue>
using namespace std;
int main(){
    int n;
    cout<<"enter no of elements you want";
    cin>>n;
    int x;
    priority_queue<int>qu;
    for(int i=0;i<n;i++){
        cin>>x;
        qu.push(x);
    }
    for(int i=0;i<n-2;i++){
        qu.pop();
    }
    cout<<qu.top();
    return 0;
}