#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>

using namespace std;

int main(){
    //산술, 중앙, 최빈, 범위 --> sort를 떄리자.
    int n = 0;
    double x = 0;
    vector <int> v;
    vector <int> modes;

    int mean = 0, median = 0, mode = 0, range = 0;

    cin >> n;
    for(int i=0; i<n;i++){
        cin >> x;
        v.push_back(x);
    }
    
    //1. 산평
    for(int i = 0; i < n; i++){
        mean += v[i];
    }
    mean = round((double)(mean / n));
    if(mean == -0) mean = 0;
    cout << (int)mean << endl;

    //중앙
    sort(v.begin(), v.end());
    if(n == 1) {
        median = v[0];
    } else median = v[(n-1)/2];
    cout << median << endl;

    //최빈 --> d8001의 v로 처리
    int freq[8001] = {0};
    for(int i : v){
        freq[i + 4000]++;
    }

    int max_freq = 0;
    for(int i = 0; i < 8001; i++){
        if(freq[i] > max_freq){
            max_freq = freq[i];
        }
    }

    for(int i = 0; i < 8001; i++){
        if(freq[i] == max_freq){
            modes.push_back(i - 4000);
        }
    }

    if(modes.size() == 1){
        mode = modes[0];
    } else {
        sort(modes.begin(), modes.end());
        mode = modes[1];
    }
    cout << mode << endl;

    //범위
    range = v[n-1]-v[0];
    cout << range << endl;

    return 0;
}
