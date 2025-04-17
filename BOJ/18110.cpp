#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    int cut = round(n * 0.15);
    int sum = 0, x = 0;

    for(int i = cut; i < n - cut; i++) {
        sum += arr[i];
        x += 1;
    }

    if(x == 0) {
        cout << 0 << endl;
        return 0;
    }

    int res = round((double)sum / x);
    cout << res << endl;

    return 0;
}
