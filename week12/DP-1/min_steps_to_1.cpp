#include<iostream>
#include<cmath>
using namespace std;
//memoization
int minStepsHelper(int n,int*ans){
    //base case
    if(n<=1) return 0;

    //check if output already exists
    if(ans[n]!=-1){
        return ans[n];
    }

    //calculate output
    int x=minStepsHelper(n-1,ans);
    int y=10000;
    int z=10000;
    if(n%2==0){
        y=minStepsHelper(n/2,ans);
        

    }
    if(n%3==0){
        z=minStepsHelper(n/3,ans);


    }
    int output=min(x,min(y,z))+1;
    //save output for future use
    ans[n]=output;
    return output;
}

int minSteps_2(int n){
    int *ans=new int[n+1];
    for(int i=0;i<=n;i++){
        ans[i]=-1;
    }

    return minStepsHelper(n,ans);
}




//recursive approach
int minSteps(int n){
    //base case
    if(n<=1){
        return 0;
    }

    //recursive call
    int x=minSteps(n-1);
    int y=10000;
    int z=10000;
    if(n%2==0){
        y  =minSteps(n/2);
    }
    if(n%3==0){
        z=minSteps(n/3);
    }

    //calculate final output
    int ans=min(x,min(y,z))+1;
    return ans;


}
int main(){
    int n;
    cin>>n;
int a=minSteps(n);
cout<<a;
}