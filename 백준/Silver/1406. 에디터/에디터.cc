#include<iostream>
#include<list>
using namespace std;

int main() {
	string s;
	int t_case;
	cin >> s;
	cin >> t_case;

	list<char> L;
	for (auto c : s) {
		L.push_back(c);
	}
	auto cursor = L.end();

	while (t_case--) {
		char c;
		cin >> c;
		if (c == 'L') {
			if (cursor != L.begin())
				cursor--;
		}
		else if (c == 'D') {
			if (cursor != L.end())
				cursor++;
		}
		else if (c == 'B') {
			if (cursor != L.begin()) {
				cursor--;
				cursor = L.erase(cursor);
			}
		}
		else if (c == 'P') {
			char x;
			cin >> x;
			L.insert(cursor, x);
		}
	}
	for (auto c : L){
		cout << c;
	}
	return 0;
}