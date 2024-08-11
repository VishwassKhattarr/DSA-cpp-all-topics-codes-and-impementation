using namespace std;
template<typename T>
class QueueusingArray{
    T *data;
    int nextIndex;
    int firstIndex;
    int size;
    int capacity;

    public:
    QueueusingArray(int s){
        data= new T[s];
        nextIndex=0;
        firstIndex=-1;
        size=0;
        capacity=s;
    }

    int getSize(){
        return size;
    }
    
    bool isEmpty(){
        return size==0;
    }

    void enqueue(T element){
         if(size==capacity){
            T *newData=new T[2*capacity];
            int j=0;
            for(int i=firstIndex;i<capacity;i++){
                newData[j]=data[i];
                j++;
            }
            for(int i=0;i<firstIndex;i++){
                newData[j]=data[i];
                j++;
            }
            
                delete [] data;
                data=newData;
                firstIndex=0;
                nextIndex=capacity;
                capacity=2*capacity;
                       //     cout<<"queue full !"<<endl;        ------>static array
                       //     return;
           }
        

        data[nextIndex]=element;
        nextIndex=(nextIndex+1)%capacity;

        if(firstIndex==-1){
            firstIndex=0;
        }
        size++;
    } 

    T front(){
        if(isEmpty()){
            cout<<"queue is empty"<<endl;
            return 0;
        }
        return data[firstIndex];
    }

    T dequeue(){
        if(isEmpty()){
            cout<<"queue is empty"<<endl;
            return 0;
        }

        T ans=data[firstIndex];
        firstIndex=(firstIndex+1)%capacity;
        size--;
        if(size==0){
            nextIndex=0;
            firstIndex=-1;
        }
        return ans;
    }

};