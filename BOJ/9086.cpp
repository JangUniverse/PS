#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    string str;

    while(N--){
        cin >> str;
        cout << str[0] << str[str.length()-1] <<endl;
    }
    return 0;
}