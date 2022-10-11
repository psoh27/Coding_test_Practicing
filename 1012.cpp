#include <iostream>
#include <vector>
#include <algorithm>
#include <string>


using namespace std;

int m;
int n;
int k;
int map[50][50];

bool dfs(int a,int b){
    if(a<0||b<0|a>=n||b>=m){
        return false;
    }
   if(map[a][b]==1){
       map[a][b]=0;

       dfs(a-1,b);
       dfs(a,b-1);
       dfs(a,b+1);
       dfs(a+1,b);
    
       return true;
   }
   return false;
}

int main()
{
    int t;
   cin>>t;
    int result=0;
   for(int i=0;i<t;i++){
       cin>>m>>n>>k;
        fill(&map[0][0],&map[m-1][n],0);
       for(int j=0;j<k;j++){
           int a,b;
           cin>>a>>b;
           map[b][a]=1;
       }
       for(int k=0;k<n;k++){
           for(int s=0;s<m;s++){
               if(dfs(k,s)==true){
                   result++;
               }
           }
       }
       cout<<result<<"\n";
       result=0;
   }
    return 0;
}
