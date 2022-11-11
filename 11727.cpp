2×n 직사각형을 1×2, 2×1과 2×2 타일로 채우는 방법의 수를 구하는 프로그램을 작성하시오.

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin>>n;
    long long dp[1001];
    dp[1]=1;
    dp[2]=3;
    for(int i=3;i<=n;i++){
        dp[i] = (2*dp[i-2]+dp[i-1])%10007;
    }
    cout<<dp[n]<<"\n";
    return 0;
}
