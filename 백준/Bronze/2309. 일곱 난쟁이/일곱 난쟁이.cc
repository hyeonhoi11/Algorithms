#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	vector<int> vec;
	int sum = 0;

	for (int i = 0; i < 9; i++) {
		int height;
		cin >> height;
		vec.push_back(height);
		sum += height;
	}
	
	int diff = sum - 100;
	int a_1 = -1;
	int a_2 = -1;

	for (int i = 0; i < 8; i++) {
		for (int j = i + 1; j < 9; j++) {
			if (vec[i] + vec[j] == diff) {
				a_1 = i;
				a_2 = j;
				break;
			}
		}
	}
	vector<int> result;

	for (int i = 0; i < vec.size(); i++) {
		if (i == a_1 || i == a_2) continue;
		result.push_back(vec[i]);
	}

	sort(result.begin(), result.end());

	for (int i = 0; i < result.size(); i++) {
		cout << result[i] << '\n';
	}

	return 0;
}