#include<iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int N;
	cin >> N;

	int arr[6];
	for (int i = 0; i < 6; i++) {
		cin >> arr[i];
	}
	int T, P;
	cin >> T >> P;

	int cnt = 0;
	for (int i = 0; i < 6; i++) {
		cnt += (arr[i] + T - 1) / T;
	}

	int p_bun = N / P;
	int p_sing = N % P;

	cout << cnt << '\n';
	cout << p_bun << ' ' <<  p_sing << '\n';
	return 0;
}