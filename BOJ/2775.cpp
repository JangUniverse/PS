#include <iostream>
using namespace std;

int number(int x, int y){
    if(y==1){
        return 1;
    } else if(x == 0){
        return y;
    } else {
        return (number(x-1, y) + number(x, y-1));
    }   
}

int main(){
    int T, k, n;
    cin >> T;

    for(int i = 0; i<T; i++){
        cin >> k >> n;
        cout << number(k, n) << endl;
    }
    return 0;
}