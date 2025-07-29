#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	string s;
	string c;
	cin >> s;

	c = s;
	reverse(s.begin(), s.end());

	if (s==c)
		cout << 1 << '\n';
	else
		cout << 0 << '\n';

	return 0;
}