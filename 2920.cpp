다장조는 c d e f g a b C, 총 8개 음으로 이루어져있다. 이 문제에서 8개 음은 다음과 같이 숫자로 바꾸어 표현한다.
 c는 1로, d는 2로, ..., C를 8로 바꾼다.

1부터 8까지 차례대로 연주한다면 ascending, 8부터 1까지 차례대로 연주한다면 descending, 둘 다 아니라면 mixed 이다.

연주한 순서가 주어졌을 때, 이것이 ascending인지, descending인지, 아니면 mixed인지 판별하는 프로그램을 작성하시오.

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cstdio>

using namespace std;


int main()
{
    vector<int> v;
    vector<int> asc_sort;
    vector<int> desc_sort;
    for(int i=0;i<8;i++){
        int a;
        cin>>a;
        v.push_back(a);
        asc_sort.push_back(a);
        desc_sort.push_back(a);
    }
    sort(asc_sort.begin(), asc_sort.end(),less<>());
    sort(desc_sort.begin(),desc_sort.end(),greater<>());
    if(v==asc_sort){
        cout<<"ascending"<<"\n";
    }
    else if(v==desc_sort){
        cout<<"descending"<<"\n";
    }
    else{
        cout<<"mixed"<<"\n";
    }
}
