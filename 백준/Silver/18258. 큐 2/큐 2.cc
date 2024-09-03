#include<iostream>
#include<queue>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	queue<int> Q;
	int t_case;
	cin >> t_case;

	while (t_case--) {
		string s;
		cin >> s;

		if (s == "push") {
			int x;
			cin >> x;
			Q.push(x);
		}
		else if (s == "pop") {
			if (Q.empty()) {
				cout << "-1" << '\n';
			}
			else {
				cout << Q.front() << '\n';
				Q.pop();
			}
		}
		else if (s == "size") {
			cout << Q.size() << '\n';
		}
		else if (s == "empty") {
			if (Q.empty())
				cout << '1' << '\n';
			else
				cout << '0' << '\n';
		}
		else if (s == "front") {
			if (Q.empty())
				cout << "-1" << '\n';
			else
				cout << Q.front() << '\n';
		}
		else if (s == "back") {
			if (Q.empty())
				cout << "-1" << '\n';
			else
				cout << Q.back() << '\n';
		}
	}
}