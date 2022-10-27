김진영이 듣도 못한 사람의 명단과, 보도 못한 사람의 명단이 주어질 때, 듣도 보도 못한 사람의 명단을 구하는 프로그램을 작성하시오.


#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
    int m,n;
    string str;
    int finded;
    int cnt=0;
    cin>>n>>m;
    set<string> listen;
    vector<string> answer;
    for(int i=0;i<n;i++){
        cin>>str;
        listen.insert(str);
    }
    for(int i=0;i<m;i++){
        cin>>str;
        if(listen.find(str) != listen.end()){
            cnt++;
            answer.push_back(str);
        }
    }
    cout<<cnt<<"\n";
    sort(answer.begin(), answer.end(),less<>());
    for(int i=0;i<cnt;i++){
        cout<<answer[i]<<"\n";
    }
    return 0;
}
