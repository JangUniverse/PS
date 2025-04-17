#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    int arr[8];
    for(int i = 0; i < 8; i++){
        cin >> arr[i];
    }
    
    bool ascending = true;
    bool descending = true;
    
    for(int i = 0; i < 7; i++){
        if(arr[i] > arr[i+1]) ascending = false;
        if(arr[i] < arr[i+1]) descending = false;
    }
    
    if(ascending) cout << "ascending" << endl;
    else if(descending) cout << "descending" << endl;
    else cout << "mixed" << endl;
    
    return 0;
}