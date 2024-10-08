#include<iostream>
#include<stack>
using namespace std;

int main() {
	stack<int> st;
	int seq[1000001];
	int ans[1000001];

	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> seq[i];
	}

	for (int i = N - 1; i >= 0; i--) {
		while (!st.empty() && st.top() <= seq[i])
			st.pop();

		if (st.empty())
			ans[i] = -1;
		else
			ans[i] = st.top();

		st.push(seq[i]);
	}

	for (int i = 0; i < N; i++) {
		cout << ans[i] << ' ';
	}
}