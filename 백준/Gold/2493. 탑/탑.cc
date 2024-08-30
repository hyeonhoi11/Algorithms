#include<iostream>
#include<stack>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int N;
	cin >> N;
	stack<pair<int, int>> st;

	for (int i = 1; i <= N; i++) {
		int x;
		cin >> x;
		while (!st.empty()) {
			if (st.top().second > x) {
				cout << st.top().first << ' ';
				break;
			}
			st.pop();
		}
		if (st.empty()) cout << "0 ";
		st.push(make_pair(i, x));
	}
}