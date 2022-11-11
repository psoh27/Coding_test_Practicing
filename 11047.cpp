준규가 가지고 있는 동전은 총 N종류이고, 각각의 동전을 매우 많이 가지고 있다.

동전을 적절히 사용해서 그 가치의 합을 K로 만들려고 한다. 이때 필요한 동전 개수의 최솟값을 구하는 프로그램을 작성하시오.

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
    
    int n,k;
    vector<int> coin;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        coin.push_back(a);
    }
    int answer=0;
    
    for(int i=coin.size()-1;i>=0;i--){
        if(coin[i] > k){
            continue;
        }
        else{
            answer = answer + (k/coin[i]);
            k = k%coin[i];
        }
    }
    cout<<answer<<"\n";
    return 0;
}
