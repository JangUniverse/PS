#include<iostream>
using namespace std;

int main() {
	int n;
	string str;
	cin >> n;
	cin >> str;
	long long m = 1234567891;
	long long r = 1;
	long long sum = 0;

	for(int i = 0; i < n; i++){
		sum += ((long(str[i]) - 96) * r) % m;
		r = (r*31)%m;
	}

	cout << sum % m;
}