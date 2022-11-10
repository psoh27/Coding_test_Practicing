자연수 
N
\(N\)과 정수 
K
\(K\)가 주어졌을 때 이항 계수 
(
N
K
)
\(\binom{N}{K}\)를 구하는 프로그램을 작성하시오.

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n,k,mul_n=1,mul_k=1;
    cin>>n>>k;
    
    for(int i=n;i>n-k;i--){
        mul_n = mul_n * i;
    }
    for(int i=k;i>0;i--){
        mul_k = mul_k * i;
    }
    cout<<mul_n/mul_k<<"\n";
    

    return 0;
}
