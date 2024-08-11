#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> ar(2*n+1);
    for(int i=0;i<2*n+1;i++){
        cin>>ar[i];
    }
    sort(ar.begin(),ar.end());
    bool flag=false;
    for(int i=0;i<n;i++){
        int idx=2*i;
        if(ar[idx]!=ar[idx+1]){
            flag=true;
            cout<<ar[idx];
            break;
        }


        }
        if(flag==false){
            cout<< ar[2*n];
        }
    }

