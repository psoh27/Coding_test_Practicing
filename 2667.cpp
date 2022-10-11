#include <iostream>
#include <vector>
#include <algorithm>
#include <string>


using namespace std;

int n;
int cnt=0;
int map[25][25];

bool dfs(int a,int b){
    if(a<0||b<0|a>=n||b>=n){
        return false;
    }
   if(map[a][b]==1){
       map[a][b]=0;
       cnt++;
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
   
   string str;
   cin>>n;
   
   for(int i=0;i<n;i++){
       cin>>str;
       for(int j=0;j<n;j++){
           map[i][j]=str[j]-'0';
       }
   }
   int result=0;
   vector<int> v;

   for(int i=0;i<n;i++){
       for(int j=0;j<n;j++){
           if(dfs(i,j)==true){
               result++;
               v.push_back(cnt);
               cnt=0;
           }
       }
   }
  cout<<result<<"\n";
  sort(v.begin(),v.end());
  for(int i=0;i<v.size();i++){
      cout<<v[i]<<"\n";
  }
    
    
    return 0;
}
