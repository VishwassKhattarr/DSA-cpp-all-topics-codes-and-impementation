#include <iostream>
#include<queue>
using namespace std;
void printDFS(int **edges,int n,int sv,bool *visited){
    cout<<sv<<endl;
    visited[sv]=true;
    for(int i=0;i<n;i++){
        if(i==sv){
            continue;
        }
        if(edges[sv][i]==1){
            if(visited[i]){
                continue;
            }
            printDFS(edges,n,i,visited);
        }
        //delete all the memory
    }
}

void print_BFS(int **edges,int n,int sv,bool *visited){
    queue<int> pendingVertices;
    // bool *visited=new bool[n];
    // for(int i=0;i<n;i++){
    //     visited[i]=0;
    // }
    pendingVertices.push(sv);
    visited[sv]=true;
    while(!pendingVertices.empty()){
        int currentVertex=pendingVertices.front();
        pendingVertices.pop();
        cout<<currentVertex<<endl;
        for(int i=0;i<n;i++){
            if(i==currentVertex){
                continue;
            }
            if(edges[currentVertex][i]==1 && !visited[i]){
                pendingVertices.push(i);
                visited[i]=true;
            }
        }
    }

    delete [] visited;
    for(int i=0;i<n;i++){
        delete [] edges[i];
    }

}

void BFS(){
     bool *visited=new bool[n];
    for(int i=0;i<n;i++){
        edges[i][j]=0;

    }
    for(int i=0;i<n;i++){
     if(!visited[i])
       printBFS(edges,n,0,visited);
    }
    delete [] visited; 
}

void DFS(int **edges,int n){
    bool *visited=new bool[n];
    for(int i=0;i<n;i++){
        edges[i][j]=0;

    }
    for(int i=0;i<n;i++){
     if(!visited[i])
       printDFS(edges,n,0,visited);
    }
    delete [] visited; 


}


int main(){
    int n;
    int e;
    cin >> n >> e;
    int **edges = new int *[n];
    for (int i = 0; i < n; i++)    {
        edges[i] = new int[n];
        for(int j=0;j<n;j++)        {
            edges[i][j]=0;
        }
    }

    for(int i=0;i<e;i++){
        int f,s;
        cin>>f>>s;
        edges[f][s]=1;
        edges[s][f]=1;
    }

    

    // print(edges,n,2,visited);
    
    BFS(edges,n);

    
}