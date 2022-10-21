N개의 정수 A[1], A[2], …, A[N]이 주어져 있을 때, 이 안에 X라는 정수가 존재하는지 알아내는 프로그램을 작성하시오.

입력
첫째 줄에 자연수 N(1 ≤ N ≤ 100,000)이 주어진다. 다음 줄에는 N개의 정수 A[1], A[2], …, A[N]이 주어진다. 다음 줄에는 M(1 ≤ M ≤ 100,000)이 주어진다. 다음 줄에는 M개의 수들이 주어지는데, 이 수들이 A안에 존재하는지 알아내면 된다. 모든 정수의 범위는 -2^31 보다 크거나 같고 2^31보다 작다.

출력
M개의 줄에 답을 출력한다. 존재하면 1을, 존재하지 않으면 0을 출력한다.


!이진탐색을 사용하여 구현함.!

#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
using namespace std;

int main()
{
    int n,m;
    
    cin>>n;
    vector<long long> v(n);
    for(int i=0;i<n;i++){
        scanf("%lld",&v[i]);
    }
    sort(v.begin(),v.end(),less<>());
    cin>>m;
    long long a;
    for(int i=0;i<m;i++){
        scanf("%lld",&a);
        int left = 0;
        int right = v.size()-1;
        int answer=0;
        while(left<=right){
           int mid = (left+right)/2; 
           if(v[mid]==a){
               answer =1;
               break;
           }
           else if (v[mid]>a){
               right = mid-1;
           }
           else {
               left = mid+1;
           }
        }
        if(answer >0 ){
            printf("1\n");
        }
        else{
            printf("0\n");
        }
    }
    return 0;
}
