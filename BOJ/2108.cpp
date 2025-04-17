#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int number[8001];

int main() {
    int n, num;
    int maxcnt = 0, maxcntnum = 0, cntsum = 0, median = 0;
    int maximum = -4001, minimum = 4001;
    double sum = 0;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num;
        sum += num;
        number[num + 4000]++;
    }
    double avg = sum / n;
    cout << (int)round(avg) << '\n';

    for (int i = 0; i < 8001; i++) {
        if (number[i] > 0)
            cntsum += number[i];




        if (cntsum >= n / 2 + 1) {
            median = i - 4000;
            break;
        }
    }
    cout << median << '\n';

    // 최빈(여러 개일 경우 두 번째 작은 값)
    vector<int> modes;
    for (int i = 0; i < 8001; i++) {
        if (number[i] > maxcnt)
            maxcnt = number[i];
    }
    for (int i = 0; i < 8001; i++) {
        if (number[i] == maxcnt)
            modes.push_back(i - 4000);
    }
    if (modes.size() > 1)
        cout << modes[1] << '\n';
    else
        cout << modes[0] << '\n';

    // 범위
    for (int i = 0; i < 8001; i++) {
        if (number[i] > 0) {
            minimum = i - 4000;
            break;
        }
    }
    for (int i = 8000; i >= 0; i--) {
        if (number[i] > 0) {
            maximum = i - 4000;
            break;
        }
    }
    cout << maximum - minimum << '\n';

    return 0;
}
