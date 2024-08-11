#include<iostream>
using namespace std;
int main(){
    int *p = new int;
    delete p;
    p=new int[100];
    delete [] p;
    // while(true){
    //     int i=10;
    // }
    // // i memory is erased after while loop end because of scope of variable
}