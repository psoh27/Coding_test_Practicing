
2차원 평면 위의 점 N개가 주어진다. 
좌표를 x좌표가 증가하는 순으로, x좌표가 같으면 y좌표가 증가하는 순서로 정렬한 다음 출력하는 프로그램을 작성하시오.




#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cstdio>

using namespace std;

bool compare(pair<int, int> a, pair<int, int> b){
    if(a.first==b.first){
        return a.second<b.second;
    }
    else{
        return a.first<b.first;
    }
}
int main()
{
    vector<pair<int, int>> v;
    int n;
    cin>>n;
    int x,y;
    for(int i=0;i<n;i++){
        cin>>x>>y;
        v.push_back(make_pair(x,y));
    }
    sort(v.begin(),v.end(),compare);
    for(int i=0;i<n;i++){
        cout<<v[i].first<<" "<<v[i].second<<"\n";
    }
}
