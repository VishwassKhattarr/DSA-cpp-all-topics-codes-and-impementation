#include<string>
using namespace std;
template<typename V>
class MapNode{
    public:
string key;
V value;
MapNode* next;

MapNode(string key,int value){
    this->key=key;
    this->value=value;
    next=NULL;
}

~MapNode(){
    delete next;
}

};
template<typename V>
class ourMap{
    MapNode<V>** buckets;
    int size;
    int numBuckets;

    public:
    ourMap(){
        size=0;
        numBuckets=5;
        buckets=new MapNode<V>*[numBuckets];
        for(int i=0;i<numBuckets;i++){
            buckets[i]=NULL;
        }
    }

    ~ourMap(){
        for(int i=0;i<numBuckets;i++){
            delete buckets[i];
        }
        delete[] buckets;
    
    
    }

    int size(){
        return count;
    }

    V getValue(string key){
        int bucketIndex=getBucketIndex(string key);
        MapNode<V>* head=buckets[bucketIndex];
        while(head!=NULL){
            if(head->key==key){
                return head->value;

            }
            head=head->next;
        }
        return 0;

    }

    private:
    int getBucketIndex(string key){
        int hashCode=0;
        int currentCoeff=1;
        for(int i=key.length()-1;i>=0;i--){
            hashCode+=key[i]*currentCoeff;
            hashCode=hashCode%numBuckets;
            currentCoeff*=37;
            currentCoeff=currentCoeff%numBuckets;
        }



        return hashcode%numBuckets;

    }

    void rehash(){
        MapNode<V>** temp=buckets;
        buckets=new MapNode<V>*[2*numBuckets];
        for(int i=0;i<2*numBuckets;i++){
            buckets[i]=NULL;
        }
        int oldBucketCount=numBuckets;
        numBuckets*=2;
        count=0;

        for(int i=0;i<oldBucketCount;i++){
            MapNode<V>* head=temp[i];
            while(head!=NULL){
                string key=head->key;
                V value=head->value;
                insert(key,value);
                head=head->next;
            }
        }
        for(int i=0;i<oldBucketCount;i++){
            MapNode<V>* head=temp[i];
            delete head;

        }
        delete temp[];
    }

    
public:
double getLoadFactor(){
    return (1.0*count)/numBuckets;
}

    void insert(string key,V value){
         int bucketIndex=getBucketIndex(key);
         MapNode<V>* head=buckets[bucketIndex];
         while(head!=NULL){
            if(head->key==key){
                head->value=value;
                return;
            }
            head=head->next;
         }
         head=buckets[bucketIndex];
         MapNode<V>* node=new MapNode<V>(key,value);
         node->next=head;
         buckets[bucketIndex]=node;
         count++;
         double loadFactor=(1.0*count)/numBuckets;
         if(loadFactor>0.7){
            rehash();
         }

    }

    V remove(string key){
        int bucketIndex=getBucketIndex(key);
        MapNode<V>* head=buckets[bucketIndex];
        MapNode<V>* prev=NULL;
        while(head!=NULL){
            if(head->key==key){
                if(prev==NULL){
                    buckets[bucketIndex]=head->next;//if first element is key
                }else{
                prev->next=head->next;
                }
                V value=head->value;
                head->next=NULL; //since destructor is recursive so calling delete will delete whole of the linked list ahead so we need to store head->next=NULL so that whole LL ahead is saved and not deleted
                delete head;
                return value;
            }
            prev=head;
            head=head->next;
        }
        return 0;

    }

};