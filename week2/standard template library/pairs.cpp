#include<bits/stdc++.h>
using namespace std;
bool comp( pair<int,char>a,pair<int,char>b){
  return a.second<b.second;  // increasing order
}
 int main(){
    //ways to initialise
    // pair<int ,char> p;
    // pair<int ,char> p(10,'A');
    // pair<int ,char> p= (10,'A');
    // pair<int ,char> p= make_pair(10,'A');
    // cout<<p.first<<" "<<p.second;
          vector<pair<int,char>> students;
          char section;
          int n,roll_number;
          cin>>n;
          for(int i=0;i<n;i++){
            cin>>roll_number>>section;
            students.push_back({roll_number,section});
    }
          // for(int i=0;i<n;i++){            
          //   cout<<students[i].first<<" "<<students[i].second<<" ";
          // }
          sort(students.begin(),students.end());  // sorts acc to first val   
          for(int i=0;i<n;i++){            
            cout<<students[i].first<<" "<<students[i].second<<" ";
          }

          //to sort with second valuye
          sort(students.begin(),students.end(),comp);
          for(int i=0;i<n;i++){            
            cout<<students[i].first<<" "<<students[i].second<<" ";
          }
                  
}