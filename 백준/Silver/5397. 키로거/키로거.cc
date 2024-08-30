#include<iostream>
#include<list>
using namespace std;

int main() {
	int t_case;
	cin >> t_case;
	
	while (t_case--) {
		list<char> L;
		string s;
		cin >> s;

		L.clear();

		auto cursor = L.begin();

		for (auto c : s) {
			switch (c) {
			case '<':
				if (cursor != L.begin()) {
					cursor--;
				}
				break;
			case '>':
				if (cursor != L.end()) {
					cursor++;
				}
				break;
			case '-':
				if (cursor != L.begin()) {
					cursor = L.erase(--cursor);
				}
				break;
			default:
				L.insert(cursor, c);
			}
		}

		for (auto c : L) cout << c;
		cout << '\n';
	}
}