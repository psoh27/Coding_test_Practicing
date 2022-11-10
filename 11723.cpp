비어있는 공집합 S가 주어졌을 때, 아래 연산을 수행하는 프로그램을 작성하시오.

add x: S에 x를 추가한다. (1 ≤ x ≤ 20) S에 x가 이미 있는 경우에는 연산을 무시한다.
remove x: S에서 x를 제거한다. (1 ≤ x ≤ 20) S에 x가 없는 경우에는 연산을 무시한다.
check x: S에 x가 있으면 1을, 없으면 0을 출력한다. (1 ≤ x ≤ 20)
toggle x: S에 x가 있으면 x를 제거하고, 없으면 x를 추가한다. (1 ≤ x ≤ 20)
all: S를 {1, 2, ..., 20} 으로 바꾼다.
empty: S를 공집합으로 바꾼다. 

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <set>
using namespace std;

int main()
{
    set<int> s;
    int m;
    cin>>m;
    while(m--){
        string menu;
        cin>>menu;
        int x;
        if(menu=="add"){
            cin>>x;
            if(s.count(x)==0){
                s.insert(x);
            }
        }
        if(menu=="remove"){
            cin>>x;
            if(s.count(x)==1){
                s.erase(x);
            }
        }
        if(menu=="check"){
            cin>>x;
            cout<<s.count(x)<<"\n";
        }
        if(menu=="toggle"){
            cin>>x;
            if(s.count(x)==1){
                s.erase(x);
            }
            else{
                s.insert(x);
            }
        }
        if(menu=="all"){
            for(int i=1;i<=20;i++){
                s.insert(i);
            }
        }
        if(menu=="empty"){
            s.clear();
        }
    }
    
    return 0;
}
