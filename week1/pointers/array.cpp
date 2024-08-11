#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[10];
    cout<<a<<endl;
    cout<<&a[0]<<endl;
    a[0]=5;
    a[1]=10;
    cout<<*a<<endl;
    cout<<*(a+1)<<endl; //garbage value if a[1] not defined
    cout<<sizeof(a)<<endl;
}