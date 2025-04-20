#include<iostream>
#include<string.h>
using namespace std;
string occ(string str,string ch){
    for(int i=0;i<str.length();i++){
        if((int)str[i]==(int)ch[0]){
            str.erase(i,1);
            return occ(str,ch);
        }
    }
    return str;
}
int main(){
    string str;
    cout<<"enter the string"<<endl;
    getline(cin,str);
    string ch;
    cout<<"enter the character you want to remove"<<endl;
    cin>>ch;
    cout<<occ(str,ch);
    
    return 0;
}