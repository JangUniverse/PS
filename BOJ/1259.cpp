#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    string str;
    while(true){
        cin >> str;
        if(str == "0"){
            return 0;
        }
        if(str.length() == 1){
            cout << "yes" << endl;
        }
        else {
            if(str.length() % 2 == 1){ // 홀수일 경우
                string str1 = str.substr(0, str.length()/2);
                string str2 = str.substr(str.length()/2 + 1);
                reverse(str2.begin(), str2.end());
                if(str1 == str2){
                    cout << "yes" << endl;
                } else {
                    cout << "no" << endl;
                }
            }
            else { // 짝수일 경우
                string str1 = str.substr(0, str.length()/2);
                string str2 = str.substr(str.length()/2);
                reverse(str2.begin(), str2.end());
                if(str1 == str2){
                    cout << "yes" << endl;
                } else {
                    cout << "no"<< endl;
                }
            }
        }
    }
}
