#include<iostream>
using namespace std;
class student{
    public:
int rollno;
private:
int age;
public:
//destructor
~student(){
    cout<<"destructor called !"<<endl;
    
}
// default constructor
student(){
cout<<"constructor called !"<<endl;
}
student(int r){
    cout<<"constructor 2 called"<<endl;
    this->rollno=r;
}
student(int a,int r){
    cout<<"this:"<<this<<endl;
    //this is a pointer variable
    cout<<"constructor 3 called"<<endl;
    this->age =a;
    this->rollno=r;
}
void display(){
    cout <<age<<" "<<rollno<<endl; 
}
int getage(){
    return age;
}
void setage(int a , int pass){
    if(pass!=123) return;
    age=a;
}
};

//statically
// student s1;
// student s2;

// //dynamically
// student *s3=new student;
