#include<bits/stdc++.h>
using namespace std;
int main(){
    int i=10;
    cout<<&i<<endl; 
    int* p=&i;
    cout<<p<<endl;

    // float f=10.2;
    // float* q=&f;
    // cout<<q<<endl;
    // cout<<*p<<endl;
    cout<<i<<endl;
    i++;
    cout<<i<<endl;
    cout<<*p<<endl;
    int a=i;
    a++;
    cout<<a<<endl;
    cout<<i<<endl;
    cout<<*p<<endl;
    *p=23;
    cout<<i<<endl;
    *p++;
    cout<<i<<endl;
    cout<<sizeof(p)<<endl;
}