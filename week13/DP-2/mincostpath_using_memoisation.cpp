#include<iostream>
using namespace std;
int minCostPathHelper_Mem(int **input,int m,int n,int i, int j, int **output){
//base case
if(i==m-1 && j==n-1){
    return input[i][j];
}

if(i>=m || j>=n){
    return 10000;
//check if ans already exists
if(output[i][j]!=-1) return output[i][j];
//recursive calls

int x=minCostPathHelper_Mem(input,m,n,i,j+1,output);
int y=minCostPathHelper_Mem(input,m,n,i+1,j+1,output);
int z=minCostPathHelper_Mem(input,m,n,i+1,j,output);

//small calculation
int a=min(x,min(y,z))+input[i][j];
//save the ans for future use
output[i][j]=a;
return a;

}
}

int minCostPath(int **input,int m,int n){
int **output=new int*[m];
for(int i=0;i<m;i++){
    output[i]=new int[n];
    for(int j=0;j<n;j++){
        output[i][j]=-1;
    }
}
return minCostPathHelper_Mem(input,m,n,0,0,output);
}
int main(){

}