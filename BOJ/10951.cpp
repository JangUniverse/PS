#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int A, B;
    while (!(cin >> A >> B).eof()){
        cout << A+B << "\n";
    }
    
    return 0;
}