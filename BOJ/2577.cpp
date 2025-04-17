#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(int argc, char const *argv[]){
    int a, b, c;
    string num;
    int res;
    cin >> a;
    cin >> b;
    cin >> c;
    
    num = to_string(a*b*c);
    for(int i = 0; i<10; i++){
        res = count(num.begin(), num.end(), char(i+'0'));
        cout << res << endl;
    }
    return 0;
}