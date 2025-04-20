#include<iostream>
using namespace std;

int main(){
    string str;
    cout<<"enter the string"<<endl;
    getline(cin,str);
    int start=0;
    int end=str.length()-1;
    int x=0;
    while(start<end){
        if(str[start]!=str[end]){
            x=1;
            break;
        }
        start++;
        end--;
    }
    if(x==1) cout<<"it is not a pallindrome"<<endl;
    else cout<<"it is a pallindrome";
    return 0;
}