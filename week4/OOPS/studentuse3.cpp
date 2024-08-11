#include<iostream>
using namespace std;
#include "oopsintro.cpp"
int main(){
    student s1(10,1001);
    cout<<"address of s1:"<<&s1<<endl;
    student s2(200);
    s2.display();
// student s1;
// s1.display();
// student s2;
// student *s3=new student;
// s3->display();
// cout<<"parameterised constructor demo"<<endl;
// student s4(10);
// s4.display();
// student *s5=new student(101);
// s5->display();
// student s6(10,101);
// s6.display();


}