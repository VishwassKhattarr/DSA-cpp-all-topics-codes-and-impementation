#include<iostream>
#include<vector>
using namespace std;
int main(){
    int r,c;
    cin>>r>>c;
    // vector<int> ar[r];
    // for(int i=0;i<c;i++) ar[i].resize(c);

    // for(int i=0;i<r;i++){
    //     for(int j=0;j<c;j++){
    //         cin>>ar[i][j];
    //     }
    // }
    // // sum of each row
    // for(int i=0;i<r;i++){
    //     int sum=0;
    //     for(int j=0;j<c;j++){
    //         sum+=ar[i][j];
    //     }
    //     cout<<sum<<endl;
    // }

    //new way to declare
    // vector <int> v;
    vector <vector<int>> ar(r,vector<int>(c));
    // for(int i=0;i<r;i++) ar.push_back(vector<int> (c));
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>ar[i][j];
        }
    }
    // sum of each row
    for(int i=0;i<r;i++){
        int sum=0;
        for(int j=0;j<c;j++){
            sum+=ar[i][j];
        }
        cout<<sum<<endl;
}
}