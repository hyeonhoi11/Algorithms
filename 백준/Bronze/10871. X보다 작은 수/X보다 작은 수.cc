#include<iostream>
#include<vector>
using namespace std;

int main() {
	int N, x;
	cin >> N >> x;

	vector<int> vec;

	for (int i = 0; i < N; i++) {
		int n;
		cin >> n;
		vec.push_back(n);
	}

	for (int i = 0; i < N; i++) {
		if (vec[i] < x)
			cout << vec[i] << ' ';
	}
	return 0;

}