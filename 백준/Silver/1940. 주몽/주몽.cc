#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int cnt = 0;

void combi(int start,int depth, int sum, vector<int>& vec, int N, int M) {
	if (depth == 2) {
		if (sum == M) {
			cnt++;
		}
		return;
	}
	for (int i = start + 1; i < N; i++) {
		combi(i, depth + 1, sum + vec[i], vec, N, M);
	};
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int N, M;
	cin >> N >> M;

	vector<int> vec(N);
	for (int i = 0; i < N; i++) {
		cin >> vec[i];
	}
	combi(-1, 0, 0, vec, N, M);

	cout << cnt << '\n';
	return 0;
}