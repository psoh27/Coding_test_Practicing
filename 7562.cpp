
#include <iostream>
#include <queue>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
   int t;
   cin>>t;
   int dx[8]={-1,1,-2,2,-1,1,-2,2};
    int dy[8]={-2,-2,-1,-1,2,2,1,1};
    
    
    int visited[300][300];
    
   for(int i=0;i<t;i++){
       int l;
       cin>>l;
       int x,y;
       cin>>x>>y;
       int goalX,goalY;
       cin>>goalX>>goalY;
       
       fill(&visited[0][0],&visited[l-1][l],0);
       queue<pair<int,int>> q;
       q.push(make_pair(y,x));
       visited[y][x]=1;
       
       while(q.empty()!=true){
           int nowY = q.front().first;
           int nowX= q.front().second;
           if(nowY==goalY&&nowX==goalX){
               cout<<visited[nowY][nowX]-1<<"\n";
               break;
           }
           q.pop();
           for(int j=0;j<8;j++){
               int nextY= nowY+dy[j];
               int nextX = nowX+dx[j];
               if(nextX<0||nextY<0||nextX>=l||nextY>=l){
                   continue;
               }
               if(visited[nextY][nextX]==0){
                   visited[nextY][nextX]=visited[nowY][nowX]+1;
                   q.push(make_pair(nextY,nextX));
               }
           }
       }
       
   }
    
    
   
    return 0;
}
