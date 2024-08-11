#include<iostream>
#include<vector>
using namespace std;
int main(){
    // auto name="code"; // no need to define datatype
    // cout<<name;

    vector<char> ar(5,'$');
    // for(auto ele: ar){
    //     cout<<ele<<" ";
    // }
    vector<char>::iterator it=ar.begin();
    for(;it!=ar.end();it++)
    cout<<(*it)<<" ";
}