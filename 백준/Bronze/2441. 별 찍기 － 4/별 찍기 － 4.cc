#include<iostream>
using namespace std;

int main() {
	int N;
	cin >> N;

	for (int line = 1; line <= N; line++) {
		for (int i = 1; i < line; i++) {
			cout << ' ';
		}
		for (int i = N; i >= line; i--) {
			cout << '*';
		}
		cout << '\n';
	}
}