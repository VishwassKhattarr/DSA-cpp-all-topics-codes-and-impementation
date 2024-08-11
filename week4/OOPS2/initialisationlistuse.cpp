#include<iostream>
using namespace std;
#include"initialisationlist.cpp"
int main(){
    student s1(101,20);
    s1.display();
    // s1.age=20;
    //s1.rollnumber=101; //statement not allowed since after initialisation roll number garbage value has been assigned

}
