#include<iostream>
using namespace std;
int fibo_3(int n){
    int *ans=new int[n+1];
    ans[0]=0;
    ans[1]=1;
    for(int i=2;i<=n;i++){
        ans[i]=ans[i-1]+ans[i-2];
    }

    return ans[n];
}



int fibo_helper(int n,int *ans){
    if(n<=1){
        return n;
    }

    //check if output already exists
    if(ans[n]!=-1){
        return ans[n];
    }

    int a=fibo_helper(n-1,ans);
    int b=fibo_helper(n-2,ans);
    //save the output for future use
    ans[n]=a+b;

    //return the final output
    return ans[n];


}

int fibo_2(int n){
    int *ans=new int[n+1];
    for(int i=0;i<=n;i++){
        ans[i]=-1;
    }
    return fibo_helper(n,ans);
}
int main(){
int a=fibo_3(6);
cout<<a;
}