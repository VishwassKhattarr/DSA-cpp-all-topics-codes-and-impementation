#include<bits/stdc++.h>



using namespace std;
#include "template.cpp"

int main(){

    //to make a triplet
    Pair<Pair<int,int>,int> p2;
    p2.setY(10);
    Pair<int,int> p4;
    p4.setX(15);
    p4.setY(16);
    p2.setX(p4);
    cout<<p2.getX().getX()<<" "<<p2.getX().getY()<<" "<<p2.getY()<<endl;

// Pair<int,double> p1;
// p1.setX(20);
// p1.setY(20.4);
// cout<<p1.getX()<<" "<<p1.getY()<<endl;



    // Pair<int> p1;
    // p1.setX(1);
    // p1.setY(20);
    // cout<<p1.getX()<<" "<<p1.getY()<<endl;
    // Pair<double> p2;
    // p2.setX(100.34);
    // p2.setY(34.11);
    // cout<<p2.getX()<<" "<<p2.getY()<<endl;
    // Pair<char> p3;







}