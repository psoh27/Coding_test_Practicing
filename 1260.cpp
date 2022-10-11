
#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <string>
#define max 1001
using namespace std;

vector<int> g[max];
bool visited[1001];

void dfs(int ver){
    visited[ver]=true;
    cout<< ver<<" ";
    for(int i=0;i<g[ver].size();i++){
        if(visited[g[ver][i]]!=true){
            dfs(g[ver][i]);
        }
    }
}

void bfs(int ver){
    queue<int> q;
    q.push(ver);
    visited[ver]=true;
    
    while(q.empty()!=true){
        int now = q.front();
        q.pop();
        cout<<now<<" ";
        for(int i=0;i<g[now].size();i++){
            if(visited[g[now][i]]!=true){
                q.push(g[now][i]);
                visited[g[now][i]]=true;
            }
        }
    }
}
int main()
{
    int n,m,v;
    cin>>n>>m>>v;
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
   for(int i=1;i<=n;i++){
       sort(g[i].begin(),g[i].end());
   }
    dfs(v);
    cout<<"\n";
    fill(visited, visited+1001, false);
    bfs(v);

    return 0;
}
