#include<iostream>
#include"dynamicarray.cpp"
using namespace std;
int main(){
    DynamicArray d1;
    d1.add(10);
    d1.add(20);
    d1.add(30);
    d1.add(40);
    d1.add(50);
    d1.add(60);
    d1.print();
    //  d1.add(0,100);
    DynamicArray d2(d1); // copy constructor
    DynamicArray d3;
    d3=d1;

    d1.add(0,100);
    d3.print();
    d1.print();
    d2.print();


}