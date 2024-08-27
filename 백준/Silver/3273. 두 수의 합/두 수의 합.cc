#include<iostream>
#include<vector>
using namespace std;

int arr[1000001] = { 0 };
bool check[2000001];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	int x;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	cin >> x;

	int cnt = 0;
	for (int i = 0; i < n; i++) {
		if (x - arr[i] > 0 && check[x - arr[i]]) cnt++;
		check[arr[i]] = true;
	}

	cout << cnt;
	return 0;
}