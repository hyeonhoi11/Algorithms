#include<iostream>
using namespace std;

int main() {
	int N;
	cin >> N;

	for (int i = 1; i <= N; i++) {
		for (int j = N - i + 1; j >= 1; j--) {
			cout << '*';
		}
		cout << '\n';
	}
}