요세푸스 문제는 다음과 같다.

1번부터 N번까지 N명의 사람이 원을 이루면서 앉아있고, 양의 정수 K(≤ N)가 주어진다. 이제 순서대로 K번째 사람을 제거한다. 
한 사람이 제거되면 남은 사람들로 이루어진 원을 따라 이 과정을 계속해 나간다. 이 과정은 N명의 사람이 모두 제거될 때까지 계속된다.
원에서 사람들이 제거되는 순서를 (N, K)-요세푸스 순열이라고 한다. 예를 들어 (7, 3)-요세푸스 순열은 <3, 6, 2, 7, 5, 1, 4>이다.

N과 K가 주어지면 (N, K)-요세푸스 순열을 구하는 프로그램을 작성하시오.

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    
    vector<int> person;
    for(int i=0;i<n;i++){
        person.push_back(i+1);
    }
    vector<int> answer;
    int cnt = 0;
    while(answer.size()!=n){
        for(int i=0;i<n;i++){
            if(person[i]==0){
                continue;
            }
            cnt++;
            if(cnt==k){
                answer.push_back(person[i]);
                person[i] = 0;
                cnt =0;
            }
        }
    }
    cout<<"<";
    for(int i=0;i<n;i++){
        if(i<n-1){
            cout<<answer[i]<<", ";
        }
        else{
            cout<<answer[i];
        }
    }
    cout<<">"<<"\n";

    return 0;
}
