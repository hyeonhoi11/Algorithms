#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int cnt = 0;
	cin >> cnt;

	while(cnt--) {
		string s1, s2;
		cin >> s1 >> s2;

		sort(s1.begin(), s1.end());
		sort(s2.begin(), s2.end());

		if (s1 == s2) {
			cout << "Possible\n";
		}
		else {
			cout << "Impossible\n";
		}
	}
}