#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[1000]; 
    for (int i = 0; i < n; i++) cin >> arr[i];

    int max_score = *max_element(arr, arr + n);
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += (double)arr[i] / max_score * 100;
    }

    cout << sum / n;
    return 0;
}
