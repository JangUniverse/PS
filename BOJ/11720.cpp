#include <iostream>
 
using namespace std;
 
int main(int argc, char const *argv[]) {
    int N;
    string numbers;
    int result = 0;  // 결과값 초기화
    
    cin >> N;
    cin >> numbers;  // 공백 없이 붙어있는 숫자들을 문자열로 입력받음
    
    for (int i = 0; i < N; i++) {
        result += (numbers[i] - '0');  // 문자를 숫자로 변환하여 더함
    }
    
    cout << result;
    return 0;
}