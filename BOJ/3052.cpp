#include <iostream>
using namespace std;

int main() {
    int arr[42] = {0};  // 배열을 0으로 초기화
    int cnt = 0;      
    
    for(int i = 0; i < 10; i++) {
        int x;
        cin >> x;
        if(arr[x%42] == 0) { 
            arr[x%42] = 1;     
            cnt++;            
        }
    }
    
    cout << cnt << endl;  // endl 추가
    return 0;
}