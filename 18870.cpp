수직선 위에 N개의 좌표 X1, X2, ..., XN이 있다. 이 좌표에 좌표 압축을 적용하려고 한다.

Xi를 좌표 압축한 결과 X'i의 값은 Xi > Xj를 만족하는 서로 다른 좌표의 개수와 같아야 한다.

X1, X2, ..., XN에 좌표 압축을 적용한 결과 X'1, X'2, ..., X'N를 출력해보자.

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cstdio>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<long long> v;
    vector<long long> copy;
    for(int i=0;i<n;i++){
        long long a;
        cin>>a;
        v.push_back(a);
        copy.push_back(a);
    }
    sort(v.begin(),v.end());
    v.erase(unique(v.begin(),v.end()),v.end());
    for(int i=0;i<n;i++){
        cout<<lower_bound(v.begin(),v.end(),copy[i]) - v.begin()<<" ";
    }
    cout<<"\n";
}
