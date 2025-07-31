#include<iostream>
#include<string>
#include<map>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int t_case;
	cin >> t_case;

	while (t_case--) {
		int n;
		cin >> n;

		map<string, int> mp;
		for (int i = 0; i < n; i++) {
			string name, type;
			cin >> name >> type;
			
			mp[type]++;
		}

		int result = 1;
		for (auto &it : mp) {
			result *= (it.second + 1);
		}

		cout << result - 1 << '\n';
	}
	return 0;
}