#include<iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int N;
	cin >> N;

	for (int line = 1; line <= N; line++) {
		for (int i = 1; i <= N - line; i++) {
			cout << ' ';
		}
		for (int i = 1; i <= 2 * line - 1; i++) {
			cout << "*";
		}

		cout << '\n';
	}
}