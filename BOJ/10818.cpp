#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[]){
    int N, X, minvalue, maxvalue;
    cin >> N;

    int max = -1000000;
    int min = 1000000;
    
    for(int i = 0; i < N; i++){
        cin >> X;
        if (max < X){
            max = X;
        }
        if (min > X){
            min = X;
        }
    }
    cout << min << ' ' << max;

    return 0;
}