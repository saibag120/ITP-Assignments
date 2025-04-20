#include<iostream>
using namespace std;
int main(){
    int r;
    cout<<"enter no of rows";
    cin>>r;
    int c;
    cout<<"enter no of columns";
    cin>>c;
    int arr[r][c];
    cout<<"enter first matrix"<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];

        }
    }
    cout<<endl;
    cout<<"enter second matrix"<<endl;
    int brr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>brr[i][j];

        }
    }
    cout<<endl;
    cout<<"the sum is";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<arr[i][j]+brr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"the sum of transpose is"<<endl;
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            cout<<arr[j][i]+brr[j][i]<<" ";

        }
        cout<<endl;
    }
    return 0;

}
