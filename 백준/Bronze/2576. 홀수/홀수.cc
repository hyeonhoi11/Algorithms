#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	int arr[7] = { 0 };
	vector<int> vec;

	for (int i = 0; i < 7; i++) {
		cin >> arr[i];
		if (arr[i] % 2 == 1)
			vec.push_back(arr[i]);
	}

	if (vec.size() == 0) {
		cout << -1 << '\n';
		return 0;
	}
	else {
		int cnt = 0;
		for (int i = 0; i < vec.size(); i++) {
			cnt += vec[i];
		}
		sort(vec.begin(), vec.end());
		cout << cnt << '\n';
		cout << vec[0];

	}
}