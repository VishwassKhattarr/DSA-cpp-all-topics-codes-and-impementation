#include<iostream>
using namespace std;
void increment(int& n){  //passed by reference so changes reflected in main otherwise changes wouldnt have been reflected
    n++;
}

int& f(int n){ //bad practice
    int a=n;
    return a;
}
int main(){
    int i=10;
    int& k=f(i); //scope of variable violated
    cout<<k<<endl;
    increment(i);
    cout<<i<<endl;
    // int j=i;
    // i++;
    // cout<<j<<endl;

    // //need to declare j as reference variable so that changes in i are reflected in i basically j and i are both stored in same memory
    // int& k=i;
    // i++;
    // cout<<k<<endl;
    // int l=100;
    // k=l;
    // cout<<i<<endl;
}