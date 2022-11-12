수 N개가 주어졌을 때, i번째 수부터 j번째 수까지 합을 구하는 프로그램을 작성하시오.


#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n,m,i,j;
    cin>>n>>m;
    vector<int> v(n,0);
    vector<int> sum(n,0);
    for(int i=1;i<=n;i++){
        cin>>v[i];
        sum[i] = sum[i-1]+v[i];
        
    }
    while(m--){
        cin>>i>>j;
        cout<<sum[j]-sum[i-1]<<"\n";
    }
    
    return 0;
}
