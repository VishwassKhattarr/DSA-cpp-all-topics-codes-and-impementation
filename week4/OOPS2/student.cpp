#include<bits/stdc++.h>
#include<cstring>
using namespace std;
class student{
    int age;
    
    public:
    char *name;
    student(int age, char *name){
        this->age=age;
        //shallow copy
        //this->name=name;


        //deep copy
        this->name=new char[strlen(name)+1];
        strcpy(this->name,name);
    }

     student(const student &s){
            this->age=s.age;
            // this->name=s.name; //shallow copy
            this->name=new char[strlen(s.name)+1];
            strcpy(this->name,s.name);
    }

    void display(){
        cout<<name<<" "<<age<<endl;
    }

   


};