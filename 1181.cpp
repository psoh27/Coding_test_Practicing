알파벳 소문자로 이루어진 N개의 단어가 들어오면 아래와 같은 조건에 따라 정렬하는 프로그램을 작성하시오.

길이가 짧은 것부터
길이가 같으면 사전 순으로



#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(string a, string b){
    if(a.size()==b.size()){
        return a<b;
    }
    else{
        return a.size()<b.size();
    }
}
int main()
{
    int n;
    cin>>n;
    vector<string> v;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        v.push_back(s);
    }
    sort(v.begin(),v.end(),compare);
    v.erase(unique(v.begin(),v.end()),v.end());
    
    
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<"\n";
    }
    return 0;
}
