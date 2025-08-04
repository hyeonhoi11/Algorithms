#include<iostream>
using namespace std;

int main() {
	int N;
	cin >> N;

	for (int line = N; line >= 1; line--) {
		for (int i = 1; i <= N - line; i++) {
			cout << ' ';
		}
		for (int i = 1; i <= 2 * line - 1; i++) {
			cout << "*";
		}
		cout << '\n';
	}
}