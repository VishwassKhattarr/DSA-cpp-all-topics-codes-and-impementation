#include<iostream>
using namespace std;
int cell[101][101];
int vis[101][101];

int n;

bool isValid(int x,int y){
    if(x<1 || x>n || y<1 || y>n) return false;
    if(cell[x][y]==0 || vis[x][y]==1) return false;
    return true;
}

void printSolution(){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<vis[i][j]<<" ";
        }
        cout<<endl;
        
    }
}


void f(int x,int y){
    vis[x][y]=1;

    if(x==n || y==n){
        printSolution();
        vis[x][y]=0;
        
        return;
    }

    if(isValid(x-1,y)) f(x-1,y);
    if(isValid(x+1,y)) f(x+1,y);
    if(isValid(x,y-1)) f(x,y-1);
    if(isValid(x,y+1)) f(x,y+1);

    vis[x][y]=0;
    return;

 

}
int main(){

    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>cell[i][j];

        }
    }

    f(1,1);

}