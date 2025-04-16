#include <iostream>
using namespace std;

int main(){
	int A, B, C, X, Y;
	cin >> A >> B >> C >> X >> Y;

	if(A+B >= 2*(C)){
		cout << 2*C*min(X, Y) + min(A, 2*C) * max(0, X-Y) + min(B, 2*C) * max(0, Y-X);
	}
	else{
		cout << A*X+B*Y;
	}
	return 0;
}