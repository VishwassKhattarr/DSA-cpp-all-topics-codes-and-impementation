#include<iostream>
using namespace std;
void increment(int**p){
    p=p+1;
}
void increment2(int**p){
    *p=*p+1;
}
void increment3(int**p){
     **p=**p+1;
}
int main(){
    int i=10;
    int* p=&i;
    int **p2=&p;
    increment3(p2);
    cout<<i<<endl;
    cout<<p2<<endl;
    cout<<&p<<endl;
    increment2(p2);
    cout<<*p2<<endl;
    cout<<p<<endl;
    increment(p2);
    cout<<**p2<<endl;
    
}