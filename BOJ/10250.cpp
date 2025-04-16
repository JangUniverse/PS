#include <iostream>
using namespace std;

int main() {
	int t;



	int h, w, n;
	int result;
	cin >> t;

	for (int i = 0; i < t; i++) {


		cin >> h >> w >> n;

		if (n%h == 0) { //나머지가 0 --> 그냥 가 
			result = h * 100 + (n / h);
		}
		else { // 아니면 그 ㅏ음방방
			result = (n%h) * 100 + (n / h) + 1;
		}
		cout << result << endl;
	}
}