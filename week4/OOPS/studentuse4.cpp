#include<iostream>
using namespace std;
#include "oopsintro.cpp"
int main(){
    student s1;
    student s2(10);
    student s3(20,102);
    student s4(s3); //copy constructor called
    s1=s2; //no constructor called
    student s5=s4; //--> student s5(s4);
}