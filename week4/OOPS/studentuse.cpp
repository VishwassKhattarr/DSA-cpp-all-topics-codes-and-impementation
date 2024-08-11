#include<iostream>
#include "oopsintro.cpp"
using namespace std;
int main(){
    //create objects statically
    student s1;
    student s2;
    student s3, s4, s5;

    // s1.age=24;
    s1.rollno=101;
    // cout<<s1.age<<endl;
    cout<<s1.rollno<<endl;

    //create objects dynamically
    // student *s6=new student;
    //  (*s6).age=25;
    //  (*s6).rollno=125;
    //  s6->age=24;
    //  cout<<s6->age;
    cout<<s1.getage();
     s1.display();
    //  (*s6).display();
    //  s6->display();
    //error due to access modifiers



}