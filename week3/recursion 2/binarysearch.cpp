#include<iostream>
using namespace std;
int binarysearch(int si,int ei,int arr[],int x){
if(si>ei) return -1;
int mid=(si+ei)/2;
if(arr[mid]==x) return mid;
if(arr[mid]>x){
    return binarysearch(si,mid-1,arr,x);
    }
    if(arr[mid]<x){
        return binarysearch(mid+1,ei,arr,x);
    }
}
int main(){
    int ar[]={1,2,3,4,5,6};
    cout<<binarysearch(0,5,ar,4);
    
}