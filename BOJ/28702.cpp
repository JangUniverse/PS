#include <vector>
#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;
int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string str;
    for(int i =0; i<3; i++){
        cin >> str;

        if (str[0] == 'F'|| str[0] == 'B') continue;

        int num = stoi(str) + 3 -i;

        if(num % 3 && num % 5) cout << num;
        else{
            if(num % 3 == 0) cout << "Fizz";
            if (num % 5 == 0) cout << "Buzz";
        }
        break;
    }
    return 0;
}