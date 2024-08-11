template<typename T>
class Node{
    public:
    T data;
    Node<T> *next;
    
    Node(T data){
        this->data=data;
        next=NULL;
    }

};

template<typename T>
class Stack{
    Node<T> *head;
    int size; //no. of elements present in stack

    public:

    Stack(){
        head=NULL;
        size=0;
    }

    int getSize(){
          return size;
    }

    bool isEmpty(){
          return size==0;
    }
    void push(T element){
        Node<T> *n;
        if(head==NULL){
            head=n;
        }
        n->data=element;
        n->next=head;
        head=n;
        size++;

            
    }
    T pop(){
        if(size==0){
            return 0;
        }
      T ans=head->data;
      head=head->next;
      return ans;
    }

    T top{
        if(head==NULL){
            return 0;
        }
         return head->data;
    }
};