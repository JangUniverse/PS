#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    
    if(a == b && b == c) cout<< 10000+1000*a;
    else if(a==b or b == c) cout << 1000 + 100*b;
    else if(c==a) cout << 1000 + 100*c;
    else cout << 100 * max({a,b,c});
    return 0;
}