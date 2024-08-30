#include<iostream>
using namespace std;
int lcs(string s, string t, int **output){
int m=s.size();
int n=t.size();

    //Base case
    if(s.size()==0 || t.size()==0) return 0; 

//check if ans already exists
if(output[m][n]!=-1) return output[m][n];

    //Recursive calls
    int ans;
    if(s[0]==t[0]){
     ans=1+lcs(s.substr(1),t.substr(1),output);
    }else{
    int a=lcs(s.substr(1),t,output);
    int b=lcs(s,t.substr(1),output);
    int c=lcs(s.substr(1),t.substr(1),output);
     ans= max(a,max(b,c));
    }

    //save your calculation
    output[m][n]=ans;

    //return ans
    return ans;

}
int main(){

}
