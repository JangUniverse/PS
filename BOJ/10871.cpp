#include <iostream>
 
using namespace std;
 
int main(int argc, char const *argv[]) {
    
    int N, X;
    int arr[10000];

    cin >> N >> X;

    for (int i =0; i < N; i++){
        cin >> arr[i];
    }

    for (int i = 0; i < N; i++){
        if (arr[i] < X){
            cout << arr[i] << " ";
        }
    }
    return 0;
}