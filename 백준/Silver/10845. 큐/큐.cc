#include<iostream>
#include<queue>
using namespace std;

int main() {
	int t_case;
	queue<int> q;

	cin >> t_case;
	while (t_case--) {
		string cmd;
		cin >> cmd;

		if (cmd == "push") {
			int x;
			cin >> x;
			q.push(x);
		}
		else if (cmd == "pop") {
			if (q.empty())
				cout << -1 << '\n';
			else {
				cout << q.front() << '\n';
				q.pop();
			}
		}
		else if (cmd == "size") {
			cout << q.size() << '\n';
		}
		else if (cmd == "empty") {
			if (q.empty())
				cout << 1 << '\n';
			else
				cout << 0 << '\n';
		}
		else if (cmd == "front") {
			if (q.empty())
				cout << -1 << '\n';
			else
				cout << q.front() << '\n';
		}
		else {
			if (q.empty())
				cout << -1 << '\n';
			else {
				cout << q.back() << '\n';
			}
		}
	}
	return 0;
}