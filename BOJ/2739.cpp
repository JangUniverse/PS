#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int T;
    cin >> T;
    
    for(int i = 1; i <= 9; i++) {
        cout << T << " * " << i << " = " << T*i << '\n';
    }
    
    return 0;
}