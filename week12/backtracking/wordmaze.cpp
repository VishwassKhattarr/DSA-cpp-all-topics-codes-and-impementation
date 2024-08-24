#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int n , m;
bool res=true;
char cell[100][100];
bool vis[100][100];
string word;
bool isValid(int x, int y, char ch){
    if(x<0 || x>=n || y<0 || y>=n){
        return false;
    }

    if(vis[x][y]==1 || cell[x][y]!=ch) return false;
        
        return true;
}



void present(int x, int y , int idx){
    vis[x][y]=true;
    if(idx==word.size()-1){
        vis[x][y]=false;
        res=true;
        return;
    }

    if(isValid(x-1,y,word[idx+1])){
        present(x-1,y,idx+1);
    }

    if(isValid(x+1,y,word[idx+1])){
        present(x+1,y,idx+1);
    }

    if(isValid(x,y-1,word[idx+1])){
        present(x,y-1,idx+1);
    }

    if(isValid(x,y+1,word[idx+1])){
        present(x,y+1,idx+1);
    }

    vis[x][y]=false;
    return;
}


int main(){
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>cell[i][j];
        }
    }
    cin>>word;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(cell[i][j]==word[0]){
                present(i,j,0);
                if(res){
                    cout<<"yes";
                    return 0;
                }
            }
        }
    }
 cout<<"No";
 return 0;
}