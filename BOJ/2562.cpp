#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    int arr[9];
    int maxvalue = 0;
    int maxvalueindex = 0;
    
    for(int i = 0; i < 9; i++){
        cin >> arr[i];
        if(maxvalue < arr[i]){
            maxvalue = arr[i];
            maxvalueindex = i + 1;
        }
    }
    cout << maxvalue << endl;
    cout << maxvalueindex << endl;
    return 0;
}