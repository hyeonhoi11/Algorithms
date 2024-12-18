#include<iostream>
#include<stack>
using namespace std;

int main() {
	int N;
	cin >> N;
	int ans = 0;

	while (N--) {
		stack<char> st;
		string s;
		cin >> s;

		for (int i = 0; i < s.size(); i++) {
			if (st.empty())
				st.push(s[i]);
			else {
				if (st.top() == s[i])
					st.pop();
				else
					st.push(s[i]);
			}

		}

		if (st.empty()) {
			ans++;
		}
	}
	cout << ans << '\n';
}