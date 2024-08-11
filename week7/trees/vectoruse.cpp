#include<iostream>
#include<vector>
using namespace std;
int main(){
    //dynamic allocation ---> vector<int> *vp=new vector<int>();
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v[1]=100;
    cout<<v[0]<<endl;
    cout<<v[1]<<endl;
    cout<<v[2]<<endl;
    cout<<v.at(6)<<endl;
    cout<<v.size()<<endl;
// at is safer to use
}