2×n 크기의 직사각형을 1×2, 2×1 타일로 채우는 방법의 수를 구하는 프로그램을 작성하시오.


#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cstdio>

using namespace std;

int main()
{
    int d[1001];
    int n;
    cin>>n;
    d[1]=1;
    d[2]=2;
    for(int i=3;i<=n;i++){
        d[i] = (d[i-1]+d[i-2])%10007;
    }
    cout<<d[n]<<"\n";
}
