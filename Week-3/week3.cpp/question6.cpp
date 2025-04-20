#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string str;
    cout<<"enter the string ";
    getline(cin,str);
    for(int i=0;i<str.size();i++){
        int x=(int)str[i];
        for(int j=65;j<91;j++){
            if(j==x) str[i]=(char)x+32;
        }
        cout<<str[i];
    }

    return 0;
}