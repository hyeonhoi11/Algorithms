#include<iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	string s;
	cin >> s;

	for (char c = 'a'; c <= 'z'; c++) {
		int cnt = 0;
		for (auto a : s) {
			if (c == a)
				cnt++;
		}
		cout << cnt << ' ';
	}

	return 0;
}