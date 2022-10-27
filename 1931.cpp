 한 개의 회의실이 있는데 이를 사용하고자 하는 N개의 회의에 대하여 회의실 사용표를 만들려고 한다. 
   각 회의 I에 대해 시작시간과 끝나는 시간이 주어져 있고, 각 회의가 겹치지 않게 하면서 회의실을 사용할 수 있는 회의의 최대 개수를 찾아보자. 
   단, 회의는 한번 시작하면 중간에 중단될 수 없으며 한 회의가 끝나는 것과 동시에 다음 회의가 시작될 수 있다. 회의의 시작시간과 끝나는 시간이 같을 수도 있다. 
   이 경우에는 시작하자마자 끝나는 것으로 생각하면 된다.


#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

bool cmp (pair<int, int> a , pair<int, int> b){
    if(a.second == b.second){
        return a.first < b.first;
    }
    else{
       return a.second<b.second;
    }
}
int main()
{
    int n;
    cin>>n;
    vector<pair<int, int>> v;
    for(int i=0;i<n;i++){
        int start, end;
        cin>>start>>end;
        v.push_back(make_pair(start, end));
    }
    sort(v.begin(), v.end(), cmp);
    
    int end_time = v[0].second;
    int cnt=1; //반드시 하나의 회의는 가능하다.
    
    for(int i=1;i<n;i++){
        if(end_time <= v[i].first){
            cnt++;
            end_time = v[i].second;
        }
    }
    cout<<cnt<<"\n";
    return 0;
}
