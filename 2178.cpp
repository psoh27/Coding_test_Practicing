
#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <string>

#define max 101
using namespace std;
int n,m;
queue<pair<int,int>> q;
int dx[4]={-1,1,0,0};
int dy[4]={0,0,-1,1};

int main()
{
    cin>>n>>m;
   int g[n][m];
    for(int i=0;i<n;i++){
        string str;
        cin>>str;
        for(int j=0;j<m;j++){
           g[i][j] = str[j]-'0';
        }
    }
    q.push(make_pair(0,0)); //첫 시작점
    
    while(q.empty()!=true){
        pair<int,int> p = q.front();
        q.pop();
        for(int i=0;i<4;i++){
            int nx = dx[i] + p.first;
            int ny = dy[i] + p.second;
            if(nx>=0&& ny>=0 && nx<n&&ny<m){
                if(g[nx][ny]==1){
                    g[nx][ny]= g[p.first][p.second] +1;
                    q.push(make_pair(nx,ny));
                }
                
            }
        }
    }
    cout << g[n-1][m-1]<< "\n";
    return 0;
}
