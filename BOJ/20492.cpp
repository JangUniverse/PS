#include <iostream>
using namespace std;

int main(){
    int money;
    cin >> money;
    cout << fixed << int(money*0.78) << ' ' << int(money*0.8+money*0.2*0.78);
    return 0;
}