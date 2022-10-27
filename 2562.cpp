9개의 서로 다른 자연수가 주어질 때, 이들 중 최댓값을 찾고 그 최댓값이 몇 번째 수인지를 구하는 프로그램을 작성하시오.

예를 들어, 서로 다른 9개의 자연수

3, 29, 38, 12, 57, 74, 40, 85, 61

이 주어지면, 이들 중 최댓값은 85이고, 이 값은 8번째 수이다.

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cstdio>

using namespace std;

bool compare(pair<int, int> a, pair<int,int> b){
    return a.second < b.second;
}
int main()
{
    vector<pair<int,int>> v;
    for(int i=0;i<9;i++){
        int a;
        cin>>a;
        v.push_back({i+1,a});
    }
    sort(v.begin(),v.end(),compare);
    cout<<v[8].second<<"\n";
    cout<<v[8].first<<"\n";
}
