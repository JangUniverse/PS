#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string s;
    int arr[26];
    
    cin >> s;
    for(char i = 'a'; i <= 'z'; i++){
        cout << (int)s.find(i) << ' ';
    }
    return 0;
    
}