#include<iostream>
using namespace std;
class Node{
    public:
    char data;
    bool isTerminal;
    Node *child[26];
    int counter;


    Node(char data){
        this->data=data;
        isTerminal=false;
        counter=0;
        for(int i=0;i<26;i++){
            this->child[i]=NULL;
        }
         
    }

};

void insert(Node *root, string word){
    Node *p=root;
    cout<<"inserting word "<<word<<" \n";
    for(int i=0;i<word.size();i++){
        int idx=word[i]-'a';
        if(p->child[idx]==NULL){
            Node *newNode=new Node(word[i]);
            p->child[idx]=newNode;
            cout<<"creating node for "<<word[i]<<" \n";
        }
        p=p->child[idx]; 
    }
    p->counter++;
    cout<<"insertion of word "<<word<<" done\n";

}

bool find(string word,Node *root){
    Node *p=root;
    for(int i=0;i<word.size();i++){
        int index=word[i]-'a';
        if(p->child[index]==NULL){
            return false;
        }

        p=p->child[index];
    }

    return p->counter>0;
    
}



void remove(Node *root, string word){
    Node *p=root;
    for(int i=0;i<word.size();i++){
        int idx=word[i]-'a';

        if(p->child[idx]==NULL){
            return;

        }
        p=p->child[idx];
    }
    p->counter--;

}




int main(){
    Node *root=new Node('$');
    int n,q,code;
    //code=1=>find
    //code=2=>remove
    string word;
    cin>>n;

    while(n--){
        cin>>word;
        insert(root,word);
    }
    cin>>q;
    while(q--){
        cin>>code>>word;

        if(code==1){
             bool res=find(word,root);

        if(res==true){
            cout<<"word "<<word<<" exist\n";
        }else{
            cout<<"word "<<word<<" does not exist\n";

        }
        }else{
            remove(root,word);  
        }
       
    }
    //    insert(root,"code");
    //    insert(root,"cod");
    //    cout<<find("code",root)<<endl;
    //    cout<<find("cod",root)<<endl;

}