N개의 숫자가 공백 없이 쓰여있다. 이 숫자를 모두 합해서 출력하는 프로그램을 작성하시오.

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, sum=0;
    string s;
    cin>>n;
    cin>>s;
    for(int i=0;i<n;i++){
        sum = sum + (s[i] - '0');
    }
    cout<<sum<<"\n";
    return 0;
}
