#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
    vector<int> num(5);
    for(int i=0;i<5;i++){
        cin>>num[i];
    }
    //  vector<int> :: iterator i=num.begin();
    //   for(;i!=num.end();i++){
    //     cout<<*i<<" ";
    //   }
     
    // cout<<num.at(0)<<endl;;  //doesnt allow garbage value to be printed
    //empty
    // reverse(num.begin()+1,num.begin()+3+1);
    // for(int i=0;i<5;i++) cout<<num[i]<<" ";

//     num.clear();
//    cout<< num.size()<<endl;
//     cout<<num.empty();

// front() and back() -------------> return first and last element
// cout<<num.front()<<" "<<num.back();
// num.erase(num.end()-1);
// sorting for large to small--------->  greater<int>
sort(num.begin(),num.end(), greater<int>());
for(int i=0;i<num.size();i++){
    cout<<num[i]<<" ";
}
}