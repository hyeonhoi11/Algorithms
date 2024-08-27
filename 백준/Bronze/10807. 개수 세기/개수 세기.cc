#include<iostream>
using namespace std;

int arr[100] = {};

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	int v;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	cin >> v;

	int cnt = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] == v) cnt++;
	}
	cout << cnt;
}