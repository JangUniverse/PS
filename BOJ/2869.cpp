#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //반복문 :: 시간초과

    int A, B, V;
    cin >> A >> B >> V;
    int day = 1;
    
    day = day + (V-A)/(A-B);
    if((V-A)%(A-B)) cout << day+1;
    else cout << day;
    return 0;
    
}