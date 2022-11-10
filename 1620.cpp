#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <unordered_map>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

    unordered_map<int, string> pocketmon;
    unordered_map<string, int> pocketmon_reversing;

    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        string s;
        cin>>s;
        pocketmon[i]=s;
        pocketmon_reversing[s]=i;
    }
    while(m--){
        string s;
        cin>>s;
        if(isdigit(s[0])==0){
            cout<<pocketmon_reversing[s]<<"\n";
        }
        else{
            cout<<pocketmon[stoi(s)]<<"\n";
        }
    }
    
    
    return 0;
}
