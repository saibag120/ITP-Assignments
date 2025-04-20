#include<iostream>
#include<vector>
#include<string.h>
using namespace std;
int main(){
    string str;
    cout<<"enter the line "<<endl;
    getline(cin,str);
      vector<char>ch;
     
      for(int i=0;i<str.length();i++){
        int asc=(int)str[i];
        if((asc>=65&&asc<=90)||(asc>=97&&asc<=122)) ch.push_back(str[i]);
    }
    for(auto it:ch){
        cout<<it;
    }
    return 0;
}

