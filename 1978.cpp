주어진 수 N개 중에서 소수가 몇 개인지 찾아서 출력하는 프로그램을 작성하시오.



#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
using namespace std;

int main()
{
    int n,cnt=0,answer=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int a;
        scanf("%d",&a);
        int j=1;
        while(j<=a){
            if(a%j==0){
                cnt++;
            }
            j++;
        }
        if(cnt==2){
            answer++;
        }
        cnt=0;
    }
    printf("%d\n",answer);
    return 0;
}
