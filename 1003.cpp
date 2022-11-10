N이 주어졌을 때, fibonacci(N)을 호출했을 때, 0과 1이 각각 몇 번 출력되는지 구하는 프로그램을 작성하시오.

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int dp[41]={0,};
int fibonacci(int n) {
    if (n == 0) {
        return dp[0];
    } else if (n == 1) {
        dp[1] = 1;
        return dp[1];
    } if(dp[n]!=0){
        return dp[n];
    } else {
        dp[n]=fibonacci(n-1) + fibonacci(n-2);
        return dp[n];
    }
}

int main()
{
    int test;
    cin>>test;
    while(test--){
        int a;
        cin>>a;
        if(a ==0){
            cout<< 1<<" "<<0<<"\n";
            continue;
        }
        if(a==1){
            cout<<0<<" "<<1<<"\n";
            continue;
        }
        fibonacci(a);
        cout<<dp[a-1]<<" "<<dp[a]<<"\n";
    }
}
