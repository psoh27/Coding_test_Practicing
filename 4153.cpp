과거 이집트인들은 각 변들의 길이가 3, 4, 5인 삼각형이 직각 삼각형인것을 알아냈다. 주어진 세변의 길이로 삼각형이 직각인지 아닌지 구분하시오.

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
    int arr[3];
    
    while(true){
        cin>>arr[0]>>arr[1]>>arr[2];
        if(arr[0]==0&&arr[1]==0&&arr[2]==0){
            break;
        }
        else{
            sort(arr,arr+3);
            if(pow(arr[2],2)==pow(arr[0],2)+pow(arr[1],2)){
                cout<<"right"<<"\n";
            }
            else{
                cout<<"wrong"<<"\n";
            }
        }
    }

    return 0;
}
