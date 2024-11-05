#include<iostream>
using namespace std;
class Node{
    public:
    char data;
    bool isTerminal;
    Node *child[26];


    Node(char data){
        this->data=data;
        isTerminal=false;
        for(int i=0;i<26;i++){
            this->child[i]=NULL;
        }
         
    }

};

int main(){
    Node *root=new Node('$');

}