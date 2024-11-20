#include<iostream>
#include<deque>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int N, M;
	cin >> N >> M;

	deque<int> dq;
	int idx;
	int res = 0;

	for (int i = 1; i <= N; i++) {
		dq.push_back(i);
	}

	while (M--) {
		int x;
		cin >> x;

		for (int i = 0; i < dq.size(); i++) {
			if (dq[i] == x) {
				idx = i;
				break;
			}
		}

		if (idx <= dq.size() / 2) {
			while (1) {
				if (dq.front() == x) {
					dq.pop_front();
					break;
				}
				res++;
				dq.push_back(dq.front());
				dq.pop_front();
			}
		}
		else {
			while (1) {
				if (dq.front() == x) {
					dq.pop_front();
					break;
				}
				res++;
				dq.push_front(dq.back());
				dq.pop_back();
			}
		}
	}

	cout << res;
	return 0;
}