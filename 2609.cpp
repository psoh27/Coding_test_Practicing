두 개의 자연수를 입력받아 최대 공약수와 최소 공배수를 출력하는 프로그램을 작성하시오.

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
int gcm(int a, int b){
    int r;
    while(b){
        r= a%b;
        a=b;
        b=r;
    }
    return a;
}
int main()
{
    int n,m,big;
    cin>>n>>m;
    big = gcm(n,m);
    cout<<big<<"\n";
    cout<<(n*m)/big<<"\n";

    return 0;
}
