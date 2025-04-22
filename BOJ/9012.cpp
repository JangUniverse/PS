#include <iostream>
#include <stack>
using namespace std; //스택 쓰는 처음 문제제

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    while(N--){//new method
        string str;
        cin >> str;
        stack<char> s;
        bool isValid = true;

        for(char ch : str){
            if(ch == '('){
                s.push(ch);
            } else {
                if(s.empty()){
                    isValid = false;
                    break;
                }
                s.pop();
            }
        }

        if(isValid && s.empty()) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}
