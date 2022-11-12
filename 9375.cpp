해빈이는 패션에 매우 민감해서 한번 입었던 옷들의 조합을 절대 다시 입지 않는다. 
예를 들어 오늘 해빈이가 안경, 코트, 상의, 신발을 입었다면, 다음날은 바지를 추가로 입거나 안경대신 렌즈를 착용하거나 해야한다.
해빈이가 가진 의상들이 주어졌을때 과연 해빈이는 알몸이 아닌 상태로 며칠동안 밖에 돌아다닐 수 있을까?




#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int test, n;
    
    cin>>test;
    while(test--){
        cin>>n;
        map<string,int> cloth;
        while(n--){
            string name, kind;
            cin>>name>>kind;
            cloth[kind]++;
        }
        int answer = 1;
        
        for(auto& elem:cloth){
            answer *= elem.second +1;
        }
        cout<<answer-1<<"\n";
    }
    
    return 0;
}
