#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string str;
    cout<<"enter the string";
    getline(cin,str);
    int a=0;
    int b=0;
    int c=0;
    for(int i=0;i<str.length();i++){
        int k=(int)str[i];
        if((k>=97&&k<=122)||(k>=65&&k<=90)) a++;
        else if(k>=48&&k<=57) b++;
        else c++;
    }
    cout<<"the no of alphabets,digits and special character are "<<a<<" "<<b<<" "<<c;

    return 0;
}