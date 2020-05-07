#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>
#include <queue>
using namespace std;

void printdfs(int**edges,int n,int sv,bool*visited){
  cout<<sv<<endl;
  visited[sv]=true;
  for(int i=0;i<n;i++){
    if(edges[sv][i]==1 && visited[i]==false && i!=sv){
      printdfs(edges,n,i,visited);
    }
  }
}


void printbfs(int** edges,int n,int sv,bool* visited){
  queue<int> q;
  q.push(sv);
  visited[sv]=true;
  while(!q.empty()){
    int front=q.front();
    q.pop();
    cout<<front<<endl;
    for(int i=0;i<n;i++){
      if(edges[front][i]==1 && visited[i]==false && i!=front){
        q.push(i);
        visited[i]=true;
      }
    }
  }
}



int main() {
	int n,e;
  cin>>n>>e;
  int**edges=new int*[n];
  for(int i=0;i<n;i++){
    edges[i]=new int[n]();
    // for(int j=0;j<n;j++)
    // {
    //   edges[i][j]=0;
    // }
  }
  for(int i=0;i<e;i++){
    int x,y;
    cin>>x>>y;
    edges[x][y]=1;
    edges[y][x]=1;
  }
  bool*visited=new bool[n]();
  printdfs(edges,n,1,visited);
  
}