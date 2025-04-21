#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;

	int fi = 0;
	int temp;

	for(int i = 1; i<=n; i++){ //5갯수만
		temp = i;

		while(temp%5 == 0){
			temp /= 5;
			fi ++;
		}
	}
	cout << fi;

	return 0;
}
