//student s2(s1)-->copies properties of s1 into s2
#include<iostream>
using namespace std;
#include "oopsintro.cpp"
int main(){

// student s1(10,1001);
// s1.display();
// student s2(s1);
// //copy constructor created so constructor called! statement not printed

// s2.display();
// student *s3=new student(10,101);
// cout<<"s3:";
// s3->display();

// student s4(*s3);
// student *s5=new student(*s3);
// s5->display();

//= operator in class
student s1(10,1001);
student s2(20,2001);
student s3(10);
student *s4=new student(10,20);
// to copy s1 to s2
s2=s1;
s2.display(); 
s1.display();
s3.display();
s4->display();
delete s4;
//destructor ---------> ~student(){}
}