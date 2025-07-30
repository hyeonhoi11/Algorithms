#include<iostream>
#include<string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int t_case;
	string pattern;
	cin >> t_case >> pattern;

	int idx = pattern.find('*');
	string pattern_pre = pattern.substr(0, idx);
	string pattern_suf = pattern.substr(idx+1);

	while (t_case--) {
		string s;
		cin >> s;

		if (pattern_pre.size() + pattern_suf.size() > s.size()) {
			cout << "NE\n";
		}
		else {
			if (pattern_pre == s.substr(0, pattern_pre.size()) && pattern_suf == s.substr(s.size() - pattern_suf.size()))
				cout << "DA\n";
			else
				cout << "NE\n";
		}
	}
	return 0;
}