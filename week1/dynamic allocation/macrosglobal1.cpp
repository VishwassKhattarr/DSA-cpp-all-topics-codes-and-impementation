#include<iostream>
using namespace std;
int a;
void g(){
a++;
cout<<a<<endl;
}
void f(){
    cout<<a<<endl;
    a++;

}
int main(){
 a=10;
 f();
 cout<<a<<endl;;
 g();
 cout<<a<<endl;
}