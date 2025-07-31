#include<iostream>
#include<map>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int N, M;
	string s;
	map<string, int> mp;
	map<int, string> mp2;

	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		cin >> s;
		mp[s] = i + 1;
		mp2[i + 1] = s;
	}
	
	for (int i = 0; i < M; i++) {
		cin >> s;
		if (atoi(s.c_str()) == 0) {
			cout << mp[s] << '\n';
		}
		else {
			cout << mp2[atoi(s.c_str())] << '\n';
		}
	}

	return 0;
}