정수를 저장하는 큐를 구현한 다음, 입력으로 주어지는 명령을 처리하는 프로그램을 작성하시오.

명령은 총 여섯 가지이다.

push X: 정수 X를 큐에 넣는 연산이다.
pop: 큐에서 가장 앞에 있는 정수를 빼고, 그 수를 출력한다. 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.
size: 큐에 들어있는 정수의 개수를 출력한다.
empty: 큐가 비어있으면 1, 아니면 0을 출력한다.
front: 큐의 가장 앞에 있는 정수를 출력한다. 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.
back: 큐의 가장 뒤에 있는 정수를 출력한다. 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.


#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>

using namespace std;

int main()
{
   queue<int> q;
   string menu;
    int n;
    cin>>n;
    while(n--){
        cin>>menu;
        if(menu=="push"){
            int num;
            cin>>num;
            q.push(num);
        }
        if(menu=="pop"){
            if(q.empty()==true){
                cout<<-1<<"\n";
            }
            else{
                cout<<q.front()<<"\n";
                q.pop();
            }
        }
        if(menu=="size"){
            cout <<q.size()<<"\n";
        }
        if(menu=="empty"){
            if(q.empty()==true){
                cout<<1<<"\n";
            }
            else{
                cout<<0<<"\n";
            }
        }
        if(menu=="front"){
            if(q.empty()==true){
                cout<<-1<<"\n";
            }
            else{
                cout<<q.front()<<"\n";
            }
        }
         if(menu=="back"){
            if(q.empty()==true){
                cout<<-1<<"\n";
            }
            else{
                cout<<q.back()<<"\n";
            }
        }
    }

}
