#include<iostream>
using namespace std;

int minCostPath_DP(int **input,int m,int n){
int **output=new int*[m];
for(int i=0;i<m;i++){
    output[i]=new int[n];
}
//fill the last cell/destination
output[m-1][n-1]=input[m-1][n-1];
//fill last row from right to left
for(int j=n-2;j>=0;j--){
    output[m-1][j]=output[m-1][j+1]+input[m-1][j];
}

//fill last column from bottom to top
for(int j=n-2;j>=0;j--){
    output[j][n-1]=output[j+1][n-1]+input[j][n-1];

}
//fill remaining cells
for(int i=m-2;i>=0;i--){
    for(int j=n-2;j>=0;j--){
        output[i][j]=min(output[i][j+1],min(output[i+1][j+1],output[i+1][j]))+input[i][j];

    }
}
return output[0][0];
}
int main(){

}