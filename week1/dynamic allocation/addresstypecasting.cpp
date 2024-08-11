#include<iostream>
using namespace std;
int main(){
    int i=66;
    char c=i;
    cout<<c<<endl;
    int*p=&i;
    char* pc=(char*)p;
    cout<<p<<endl;
    cout<<pc<<endl;
    cout<<*pc<<endl;
}