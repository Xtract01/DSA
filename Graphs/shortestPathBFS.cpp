#include<iostream>
#include<vector>
#include<list>
#include<queue>
#include<unordered_set>
#include<climits>
using namespace std;
vector<list<int>> graph;
unordered_set<int> visited;
vector<vector<int>> result;
int v;
void add_edge(int src , int dest ,vector<list<int> >,bool bi_dir = true ){
    graph[src].push_back(dest);
    if(bi_dir){
        graph[dest].push_back(src);
    }
}


void bfs(int src  , vector<int> &dist){
    queue<int> q;
    visited.clear();
    dist.resize(v,INT_MAX);
    dist[src] = 0;
    visited.insert(src);
    q.push(src);
    while(!q.empty()){
        int curr = q.front();
        cout<<curr<<" ";
        q.pop();
        for(auto neighbour:graph[curr]){
            if(!visited.count(neighbour)){
                q.push(neighbour);
                visited.insert(neighbour);
                dist[neighbour] = dist[curr] + 1;
            }
        }
    }
    cout<<endl;
}


int main(){
    cin>>v;
   graph.resize(v,list<int>());
   int e ;
   cin>>e;
   visited.clear();
   while(e--){
    int s,d;
    cin>>s>>d;
    add_edge(s,d,graph);
   }
   int x;
   cin>>x;
   vector<int> dist;
   bfs(x,dist);
   for(int i = 0 ; i < v ; i++){
    cout<<i<<" "<<dist[i]<<endl;
   }
   return 0;
}