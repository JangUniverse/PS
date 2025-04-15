#include <iostream>
using namespace std;

int main(){
    int month, date;
    cin >> month;
    cin >> date;
    if(month < 2){
        cout << "Before";
    }
    if(month == 2){
        if (date < 18){
            cout << "Before";
        }
        if (date == 18){
            cout << "Special";
        }
        if (date > 18){
            cout << "After";
        }
    }
    if(month>2){
        cout << "After";
    }
    return 0;
}