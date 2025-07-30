#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int N, K;
	cin >> N >> K;

	vector<int> sum(N);

	for (int i = 0; i <N; i++) {
		int x;
		cin >> x;
		if (i == 0) {
			sum[i] = x;
		}
		else {
			sum[i] = sum[i - 1] + x;
		}
	}

	int ret = sum[K-1];
	for (int i = K; i < N; i++) {
		ret = max(ret, sum[i]- sum[i-K]);
	}

	cout << ret << '\n';
	return 0;
}