
방향 없는 그래프가 주어졌을 때, 연결 요소 (Connected Component)의 개수를 구하는 프로그램을 작성하시오.

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cstdio>

using namespace std;
bool visited[1001];
vector<int> v[1001];
 
void dfs(int x){
    visited[x]=true;
    for(int i=0;i<v[x].size();i++){
        if(visited[v[x][i]]==false){
            dfs(v[x][i]);
        }
    }
}
int main()
{
    int vertex, edge;
    cin>>vertex>>edge;
    for(int i=0;i<edge;i++){
        int a,b;
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    int cnt=0;
    for(int i=1;i<=vertex;i++){
        if(visited[i]==false){
            dfs(i);
            cnt++;
        }
    }
    cout<<cnt<<"\n";
}
