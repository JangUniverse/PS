#include <iostream>
#include <algorithm>
using namespace std;

int arr[10001] = {0, };

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;



    for(int i = 0; i < N; i++){
        int x;
        cin >> x;
        arr[x] += 1;
    }

    for(int i = 1; i<10001; i++){
        for(int j = 0; j < arr[i]; j++){
            cout << i << "\n";
        }
    }
    return 0;

}
