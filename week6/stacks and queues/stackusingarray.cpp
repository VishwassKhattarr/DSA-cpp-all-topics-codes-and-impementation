#include<bits/stdc++.h>
#include<climits>
using namespace std;
template<typename T>
class StackUsingArray{
    T *data;
    int nextIndex;
    int capacity;

    public:

    // StackUsingArray(int totalsize){
    //     data=new int[totalsize];
    //     nextIndex=0;
    //     capacity=totalsize;
    // }

    //dynamic array
     StackUsingArray(){
        data=new T[4];
        nextIndex=0;
        capacity=4;
    }


    //return the no. of elements in my stack
    int size(){
        return nextIndex;
    }

    //to check if stack is empty or not
    bool isEmpty(){
    //     if(nextIndex==0)
    //     return true;
    //     else
    //     return false;
    return nextIndex==0;
    }

    //insert element

    void push(T element){
        if(nextIndex==capacity){
        T *newData=new T[2*capacity];
            for(int i=0;i<capacity;i++){
                newData[i]=data[i];
            }
            capacity=2*capacity; 
            // cout<<"stack full"<<endl;
            // return;
             
        }
        data[nextIndex]=element;
        nextIndex++;
    }

    //delete element
    T pop(){
        // if(nextIndex==0){
        //     cout<<"stack empty"<<endl;
        //     return;
        // }
        if(isEmpty()){
            cout<<"stack is empty"<<endl;
            return 0;
        }
        nextIndex--;
        return data[nextIndex];
    }

    T top(){
        if(isEmpty()){
            cout<<"stack is empty"<<endl;
            return 0;
        }
        return data[nextIndex-1];
    }
};
