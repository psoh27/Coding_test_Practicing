숫자 카드는 정수 하나가 적혀져 있는 카드이다. 상근이는 숫자 카드 N개를 가지고 있다.
정수 M개가 주어졌을 때, 이 수가 적혀있는 숫자 카드를 상근이가 몇 개 가지고 있는지 구하는 프로그램을 작성하시오.


#include <iostream>
#include <algorithm>
#include <vector>



using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n,m;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    
    int find;
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>find;
        cout<<upper_bound(v.begin(), v.end(),find)-lower_bound(v.begin(),v.end(),find)<<" ";
    }
    cout<<"\n";
    return 0;
}
