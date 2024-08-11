#include<iostream>
using namespace std;
int check_index(int a[],int n,int x){
    if(a[0]==x) return 0;
    int index=check_index(a+1,n-1,x)+1;
    return index;
}
int main(){
    int arr[]={1,2,3,3,4};
    cout<<check_index(arr,5,3);

}