#include<iostream>
#include<vector>
using namespace std;

int main() {
	int N, v;
	cin >> N;

	vector<int> vec;

	for (int i = 0; i < N; i++) {
		int x;
		cin >> x;
		vec.push_back(x);
	}
	cin >> v;

	int cnt = 0;
	for (int i = 0; i < vec.size(); i++) {
		if (vec[i] == v)
			cnt++;
	}
	cout << cnt << '\n';
	return 0;
}