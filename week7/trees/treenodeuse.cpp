#include<bits/stdc++.h>
#include<vector>
#include<queue>
#include"treenode.cpp"
using namespace std;

treeNode<int>* takeInputLevelWise(){
     int rootData;
    cout<<"enter root data"<<endl;
    cin>>rootData;
    treeNode<int> *root=new treeNode<int>(rootData);
    queue<treeNode<int>*> pendingNodes;

    pendingNodes.push(root);
    while(pendingNodes.size()!=0){
        treeNode<int> *front=pendingNodes.front();
        pendingNodes.pop();
        cout<<"no. of children of"<<front->data<<endl;
        int numChild;
        cin>>numChild;
        for(int i=0;i<numChild;i++){
            int childData;
            cout<<"enter"<<i<<"th child of"<<front->data<<endl;
            cin>>childData;
            //treeNode<int> child(childData); //donot declare statically since it is deallocated automatically
            treeNode<int> *child=new treeNode<int>(childData);
            front->children.push_back(child);
            pendingNodes.push(child);
        }
    }
    return root;


}

treeNode<int>* takeInput(){
    int rootData;
    cout<<"enter data"<<endl;
    cin>>rootData;
    treeNode<int>* root=new treeNode<int>(rootData);

    int n;
    cout<<"enter number of children of"<<rootData<<endl; 
    cin>>n;
    for(int i=0;i<n;i++){
        treeNode<int> *child=takeInput();
        root->children.push_back(child);
    }
    return root;
}

void printTree(treeNode<int>* root){
if(root==NULL){
    return;
}

    cout<<root->data<<":";
    for(int i=0;i<root->children.size();i++){
        cout<<root->children[i]->data<<",";
    }
    cout<<endl;
    for(int i=0;i<root->children.size();i++){
        printTree(root->children[i]);
    }
}

void printAtLevelK(treeNode<int>* root,int k){
    if(root==NULL){
        return;
    }
    if(k==0){
        cout<<root->data<<Endl;
    }
    for(int i=0;i<root->children.size();i++){
        printAtLevelK(root->children[i],k-1);
    }

}

int main(){
    // treeNode<int>* root = new treeNode<int>(1);
    // treeNode<int>* node1 = new treeNode<int>(2);
    // treeNode<int>* node2 = new treeNode<int>(3);
    
    // root->children.push_back(node1);
    // root->children.push_back(node2);
    treeNode<int>* root=takeInputLevelWise();
    printTree(root);
    // todo-delete the tree
}