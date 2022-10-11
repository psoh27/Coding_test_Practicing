#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <string>


using namespace std;

queue<int> q;

int main()
{
   int n,m;
   cin>>n;
   cin>>m;
   vector<int> com[n+1];
   for(int i=0;i<m;i++){
       int a,b;
       cin>>a>>b;
       com[a].push_back(b);
       com[b].push_back(a);
   }
   
    bool visited[n+1];
    fill(visited, visited+n+1,false);
    int result=0;
    visited[1]=true;
    q.push(1);
    while(q.empty()!=true){
        int now = q.front();
        q.pop();
        for(int i=0;i<com[now].size();i++){
            if(visited[com[now][i]]!=true){
                q.push(com[now][i]);
                visited[com[now][i]]=true;
                result++;
            }
        }
    }
    cout<<result<<"\n";
    
    
    return 0;
}
