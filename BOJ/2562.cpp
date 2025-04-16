#include <iostream>
#include <climits> // INT_MIN을 사용하기 위해 필요
using namespace std;

int main(int argc, char const *argv[]){
    int arr[9];
    int maxvalue = INT_MIN; // 가능한 가장 작은 값으로 초기화
    int maxvalueindex = 0;
    
    for(int i = 0; i < 9; i++){
        cin >> arr[i];
        if(maxvalue < arr[i]){
            maxvalue = arr[i];
            maxvalueindex = i + 1;
        }
    }
    cout << maxvalue << endl;
    cout << maxvalueindex << endl;
    return 0;
}