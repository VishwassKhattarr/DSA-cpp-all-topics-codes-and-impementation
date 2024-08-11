#include<iostream>
using namespace std;
int main(){
    int m,n;
    int **p=new int* [m];
    for(int i=0;i<10;i++){
        p[i]=new int[n]; //20 colums added in each row
        for(int j=0;j<n;j++){
            cin>>p[i][j];
        }
    }for(int i=0;i<m;i++){
        delete [] p[i];
    }
    delete [] p;
} 