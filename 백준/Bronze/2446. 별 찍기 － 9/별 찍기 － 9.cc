#include<iostream>
using namespace std;

int main() {
	int N;
	cin >> N;

	for (int line = 0; line < N; line++) {
		for (int blank = 0; blank < line; blank++) {
			cout << ' ';
		}
		for (int star = 0; star < 2 *(N-line)-1; star++) {
			cout << '*';
		}
		cout << '\n';
	}
	for (int line = 1; line < N; line++) {
		for (int blank = line; blank < N-1; blank++) {
			cout << ' ';
		}
		for (int star = 0; star < 2 * line + 1; star++) {
			cout << '*';
		}
		cout << '\n';
	}
}