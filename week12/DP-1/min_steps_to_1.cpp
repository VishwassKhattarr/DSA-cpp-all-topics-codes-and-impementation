#include<iostream>
#include<cmath>
using namespace std;
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