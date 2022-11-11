첫째 줄에 저장된 사이트 주소의 수 N(1 ≤ N ≤ 100,000)과 비밀번호를 찾으려는 사이트 주소의 수 M(1 ≤ M ≤ 100,000)이 주어진다.

두번째 줄부터 N개의 줄에 걸쳐 각 줄에 사이트 주소와 비밀번호가 공백으로 구분되어 주어진다. 
사이트 주소는 알파벳 소문자, 알파벳 대문자, 대시('-'), 마침표('.')로 이루어져 있고, 중복되지 않는다. 
비밀번호는 알파벳 대문자로만 이루어져 있다. 
모두 길이는 최대 20자이다.

N+2번째 줄부터 M개의 줄에 걸쳐 비밀번호를 찾으려는 사이트 주소가 한줄에 하나씩 입력된다. 
이때, 반드시 이미 저장된 사이트 주소가 입력된.
출력
첫 번째 줄부터 M개의 줄에 걸쳐 비밀번호를 찾으려는 사이트 주소의 비밀번호를 차례대로 각 줄에 하나씩 출력한다.

#include <iostream>
#include <string>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    unordered_map<string, string> url_pw;
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        string url,pw;
        cin>>url>>pw;
        url_pw[url]=pw;
    }
    while(m--){
        string finded;
        cin>>finded;
        if(url_pw.find(finded)!=url_pw.end()){
            cout<<url_pw[finded]<<"\n";
        }
    }

    return 0;
}
