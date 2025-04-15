#include <iostream>
using namespace std;

int main(){
    int n, v;
    int arr[101];

    cin >> n;
    for (int i = 0; i<n; i++){
        cin >> arr[i];
    }
    cin >> v;
    int count = 0;
    for (int i = 0; i<n; i++){
        if (arr[i] == v){
            count ++;
        }
    }
    cout << count;
    return 0;
}