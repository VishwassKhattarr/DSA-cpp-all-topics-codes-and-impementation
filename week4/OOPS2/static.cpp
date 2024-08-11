#include<iostream>
using namespace std;
class student{
    static int totalStudents;
    public:
    int rollNumber;
    int age;
  
    student(){
        totalStudents++;  // to update total students
    }

    int getRollnumber(){
            return rollNumber;
    }
     static int getTotalStudents(){  //static since we are working with static property
        return totalStudents;        
    }

};

int student::totalStudents=0; //initialise static data members