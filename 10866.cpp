정수를 저장하는 덱(Deque)를 구현한 다음, 입력으로 주어지는 명령을 처리하는 프로그램을 작성하시오.

명령은 총 여덟 가지이다.

push_front X: 정수 X를 덱의 앞에 넣는다.
push_back X: 정수 X를 덱의 뒤에 넣는다.
pop_front: 덱의 가장 앞에 있는 수를 빼고, 그 수를 출력한다. 만약, 덱에 들어있는 정수가 없는 경우에는 -1을 출력한다.
pop_back: 덱의 가장 뒤에 있는 수를 빼고, 그 수를 출력한다. 만약, 덱에 들어있는 정수가 없는 경우에는 -1을 출력한다.
size: 덱에 들어있는 정수의 개수를 출력한다.
empty: 덱이 비어있으면 1을, 아니면 0을 출력한다.
front: 덱의 가장 앞에 있는 정수를 출력한다. 만약 덱에 들어있는 정수가 없는 경우에는 -1을 출력한다.
back: 덱의 가장 뒤에 있는 정수를 출력한다. 만약 덱에 들어있는 정수가 없는 경우에는 -1을 출력한다.
  
  
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <deque>

using namespace std;

int main()
{
   deque<int> dq;
   string menu;
    int n;
    cin>>n;
    while(n--){
        cin>>menu;
        if(menu=="push_front"){
            int num;
            cin>>num;
            dq.push_front(num);
        }
        if(menu=="push_back"){
            int num;
            cin>>num;
            dq.push_back(num);
        }
        if(menu=="pop_front"){
            if(dq.empty()==true){
                cout<<-1<<"\n";
            }
            else{
                cout<<dq.front()<<"\n";
                dq.pop_front();
            }
        }
        if(menu=="pop_back"){
            if(dq.empty()==true){
                cout<<-1<<"\n";
            }
            else{
                cout<<dq.back()<<"\n";
                dq.pop_back();
            }
        }
        if(menu=="size"){
            cout <<dq.size()<<"\n";
        }
        if(menu=="empty"){
            if(dq.empty()==true){
                cout<<1<<"\n";
            }
            else{
                cout<<0<<"\n";
            }
        }
        if(menu=="front"){
            if(dq.empty()==true){
                cout<<-1<<"\n";
            }
            else{
                cout<<dq.front()<<"\n";
            }
        }
         if(menu=="back"){
            if(dq.empty()==true){
                cout<<-1<<"\n";
            }
            else{
                cout<<dq.back()<<"\n";
            }
        }
    }

}
