#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v(5,-1);
    for(int i=0;i<5;i++){
        cin>>v[i];

    }
    cout<<"size ="<<v.size()<<endl;
    v.push_back(6);
    v.push_back(7);
    // v.pop_back();
   cout<<v.size()<<" "<<v.capacity()<<endl; 
    for(int i=0;i<v.capacity();i++){
        cout<<v[i]<<" ";
    }
}