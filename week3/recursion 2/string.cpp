#include<iostream>
using namespace std;
int main(){
    string* sp=new string;
    *sp="def";
    cout<<sp<<endl;
    cout<<*sp<<endl;
    string s="abcdef";
    string s1;
    s1="def";
    cout<<s1<<endl;
    cout<<s<<endl;
    cout<<s.substr(1)<<endl;
    cout<<s.find("def")<<endl;
    cout<<s+s1<<endl;
}