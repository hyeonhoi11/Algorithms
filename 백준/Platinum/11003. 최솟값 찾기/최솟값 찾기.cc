#include<iostream>
#include<deque>
#include<vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int N, L;
	cin >> N >> L;
	vector<int> arr(N);

	deque<pair<int, int>> dq;

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < N; ++i) {
		if (!dq.empty() && i == dq.front().second + L)
			dq.pop_front();
		while (!dq.empty() && dq.back().first > arr[i])
			dq.pop_back();

		dq.push_back(make_pair(arr[i], i));

		cout << dq.front().first << " ";
	}

}