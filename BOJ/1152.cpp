#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string str;
    getline(cin, str);
    
    // 앞뒤 공백 제거
    while(!str.empty() && str.front() == ' ') str.erase(0, 1);
    while(!str.empty() && str.back() == ' ') str.pop_back();
    
    if(str.empty()) {
        cout << 0 << endl;
        return 0;
    }
    
    // 공백 개수 세기
    int spaces = count(str.begin(), str.end(), ' ');
    cout << spaces + 1 << endl;  // 단어 개수 = 공백 개수 + 1
    
    return 0;
}