#include<iostream>
using namespace std;
bool palindrome(int arr[],int n){
    if(n==0 || n==1) return true;
    bool ans;
     if(arr[0]==arr[n-1])  ans=palindrome(arr+1,n-2);
     return ans;
}
int main(){
int ar[]={1,2,3,0,1};
cout<<palindrome(ar,5);
}