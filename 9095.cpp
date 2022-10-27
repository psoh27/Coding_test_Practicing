정수 4를 1, 2, 3의 합으로 나타내는 방법은 총 7가지가 있다. 합을 나타낼 때는 수를 1개 이상 사용해야 한다.

1+1+1+1
1+1+2
1+2+1
2+1+1
2+2
1+3
3+1
정수 n이 주어졌을 때, n을 1, 2, 3의 합으로 나타내는 방법의 수를 구하는 프로그램을 작성하시오.

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cstdio>

using namespace std;


int main()
{
    
    int test;
    cin>>test;
    for(int i=1;i<=test;i++){
        int n;
        cin>>n;
        vector<int> v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(2);
    v.push_back(4);
        for(int j=4;j<=n;j++){
            int answer = v[j-1]+v[j-2]+v[j-3];
            v.push_back(answer);
        }
        cout<<v[n]<<"\n";
    }
}
