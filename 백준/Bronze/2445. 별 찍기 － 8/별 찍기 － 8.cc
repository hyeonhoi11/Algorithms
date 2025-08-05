#include<iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int N;
	cin >> N;

	for (int line = 0; line < N; line++) {
		for (int i = 0; i < line+1; i++) {
			cout << '*';
		}
		for (int i = 0; i < 2 * (N - line - 1); i++) {
			cout << ' ';
		}
		for (int i = 0; i < line+1; i++) {
			cout << '*';
		}
		cout << '\n';
	}

	for (int line = 0; line < N - 1; line++) {
		for (int i = 0; i < N - line-1; i++) {
			cout << '*';
		}
		for (int i = 0; i < 2 * (line + 1); i++) {
			cout << ' ';
		}
		for (int i = 0; i < N - line-1; i++) {
			cout << '*';
		}
		cout << '\n';
	}
}