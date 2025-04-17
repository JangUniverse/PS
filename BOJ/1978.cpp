#include <iostream>
using namespace std;

int main() {
	int N, num, dec=0, count=0;

	cin >> N;

	for (int i = 0; i < N; i++) {


		cin >> num;

		if (num == 2) {	
			dec++;
		}
		else {
			if (num == 1) {

				count++;
			}

			for (int j = 2; j < num; j++) {			
				if (num % j == 0) {					
					count++;
				}
			}
			if (count == 0) {



				dec++;
			}
			count = 0;	
		}

        
	}

	cout << dec;

	return 0;
}
