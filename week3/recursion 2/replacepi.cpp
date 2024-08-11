#include<iostream>
#include<string.h>
using namespace std;
void replacepi(char a[]){
    if(a[0]=='\0' || a[1]=='\0') return;

    if(a[0]!='p' || a[1]!='i'){
        replacepi(a+1);
    }else{
        int lastIndex=0;
        while(a[lastIndex]!='\0'){
            lastIndex++;
        }
        while(lastIndex>=2){
            a[lastIndex+2]=a[lastIndex];
            lastIndex--;
        }
        a[0]='3';
        a[1]='.';
        a[2]='1';
        a[3]='4';
        replacepi(a+4);
    }
}
int main(){
    char input[1000];
    cin.getline(input,1000);
    replacepi(input);
    cout<<input<<endl;
}