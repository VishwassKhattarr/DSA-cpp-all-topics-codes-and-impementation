#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> vect(2*n+1);
    for(int i=0;i<2*n+1;i++){
        cin>>vect[i];
    }
    int res=0;
    for(int ele:vect){
        res=res^ele;
    }
    cout<<res;
}