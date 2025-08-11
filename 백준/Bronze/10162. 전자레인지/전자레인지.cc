#include<iostream>
using namespace std;

int main() {
	int A = 300, B=60, C=10;
	int T;
	cin >> T;
	if (T % C == 0) {
		cout << T / A << ' ' << (T % A) / B << ' ' << ((T % A) % B) / C;
	}
	else
		cout << -1;
}