온라인 저지에 가입한 사람들의 나이와 이름이 가입한 순서대로 주어진다. 
이때, 회원들을 나이가 증가하는 순으로, 나이가 같으면 먼저 가입한 사람이 앞에 오는 순서로 정렬하는 프로그램을 작성하시오.





#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;
bool compare(pair<int, string> a, pair<int, string> b){
    return a.first < b.first;
}
int main()
{
    vector<pair<int,string>> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int age;
        string name;
        cin>>age>>name;
        v.push_back(make_pair(age,name));
    }
    stable_sort(v.begin(),v.end(),compare); //값이 같은 원소의 전후 관계가 바뀌지 않는 정렬 알고리즘 사용 
    for(int i=0;i<n;i++){
        cout<<v[i].first<<" "<<v[i].second<<"\n";
    }
    
    return 0;
}
