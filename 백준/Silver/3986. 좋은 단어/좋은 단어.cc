#include<iostream>
#include<string>
#include<stack>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int N;
	cin >> N;
	
	int cnt = 0;
	while (N--) {
		string s;
		cin >> s;
		stack<char> st;

		for (int i = 0; i < s.size(); i++) {
			if (st.empty()) {
				st.push(s[i]);
			}
			else if (st.top() == s[i]) {
				st.pop();
			}
			else
				st.push(s[i]);
		}

		if (st.empty()) cnt++;
	}
	cout << cnt << '\n';

}