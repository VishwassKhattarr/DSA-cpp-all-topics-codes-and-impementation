#include<iostream>
using namespace std;
#include"node.cpp"
Node *takeinput(){
    int data;
    cin>>data;
    Node *head=NULL;
    Node *tail=NULL;
    while(data!=-1){
        //Node n(data);// STATIC INITIALISATION CAUSES NODE TO BE DEALLOCATED AFTER EACH ITERATION
        Node *newNode = new Node(data);
        if(head==NULL){
        head=newNode;
        tail=newNode;
        }else{
            tail->next=newNode;
            tail=tail->next;
            //or tail=newnode
            // Node *temp=head;
            // while(temp->next!=NULL){ time complexity was high due to while loop 
            //     temp=temp->next;
            // }
            // temp->next=newNode;
        }
        
        cin>>data; 
    }
    return head;
}
Node *insertNode(Node *head,int i,int data){
    Node *newNode= new Node(data);
    int count=0;
    Node *temp=head;
    if(i==0){
        newNode->next=head;
        head=newNode;
        return head;
    }
    while(temp!= NULL && count<i-1){
        temp=temp->next;
        count++;
    }
    // Node *a=temp->next;
    // temp->next=newNode;
    // newNode->next=a;
    if(temp!=NULL){
    newNode->next=temp->next;
    temp->next=newNode;
    }
    return head;
}


void print(Node *head){
    Node *temp=head;
    // cout<<head->data<<" ";
    // head=head->next;
    // print(head);
    // while(temp!=NULL){
    //     cout<<temp->data;
    //     temp=temp->next;
    //}
          while(head!=NULL){
        cout<<head->data;
        head=head->next;
    }
}
int main(){
 //   Node *head=takeinput();
   // print(head);
   Node *head=takeinput();
   print(head);
   int i,data;
   cin>>i>>data;
   head=insertNode(head,i,data);
   print(head);
    //statically
    // Node n1(1);
    // Node n2(2);
    // Node *head=&n1;
    // Node n3(3);
    // Node n4(4);
    // Node n5(5);
    // n1.next=&n2;
    // n2.next=&n3;
    // n3.next=&n4;
    // n4.next=&n5;
    // print(head);
    // print(head);

//     n1.next=&n2;
// //    cout<<n1.data<<" "<<n2.data<<endl;
// cout<<head->data;

// //dynamically
// Node *n3=new Node(10);
// Node *head=n3;
// Node *n4=new Node(20);
// n3->next=n4;

}