#include <iostream>
#include <algorithm>

using namespace std;
string str1 = "wrong";
string str2 = "right";
int main() {
    int a, b, c;
    int arr[3];
    while(true){
        cin >> a >> b >> c;

        if(a==b && b==c) return 0;

        sort(arr, arr+3);
        if(arr[0]*arr[0] + arr[1]*arr[1] == arr[2]*arr[2]) cout << str2 << endl;
        else cout << str1 << endl;
    }
}