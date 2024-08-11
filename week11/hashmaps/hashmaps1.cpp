#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;
int main(){
    unordered_map<string,int> ourMap;
    //insert
    pair<string,int> p("abc",1);
    ourMap.insert(p);
    ourMap["def"];

    //find or access
    cout<<ourMap["def"]<<endl;
    // cout<<ourMap.at("abc")<<endl;
    // cout<<ourMap.at("ghi")<<endl; gives error
    // cout<<ourMap["ghi"]<<endl; //gives default value =0
    // cout<<ourMap.size()<<endl;

    //check presence->best way
    // if(ourMap.count("ghi")==0){
    //     cout<<"ghi is not present"<<endl;
    // }



}