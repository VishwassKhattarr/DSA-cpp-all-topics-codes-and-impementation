#include<iostream>
using namespace std;
class student{
    public:
    int age;
    const int rollnumber;
    int &x;//age reference variable
    // student(int r){
    //     rollnumber=r; wrong since already garbage value has been assigned
    // }
    student(int r,int age):rollnumber(r) , age(age) , x(this->age){  //------>initialisation list 
        // rollnumber=r;
    }

    void display(){
        cout<<age;
    }
};