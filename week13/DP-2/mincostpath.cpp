#include<iostream>
#include<cmath>
using namespace std;
int minCostPathHelper(int **input,int m,int n,int i, int j){
//base case
if(i==m-1 && j==n-1){
    return input[i][j];
}

if(i>=m || j>=n){
    return 10000;
}







//recursive calls

int x=minCostPathHelper(input,m,n,i,j+1);
int y=minCostPathHelper(input,m,n,i+1,j+1);
int z=minCostPathHelper(input,m,n,i+1,j);

//small calculation
int ans=min(x,min(y,z))+input[i][j];
return ans;

}

int minCostPath(int **input,int m,int n){

return minCostPathHelper(input,m,n,0,0);
}

int main(){

}