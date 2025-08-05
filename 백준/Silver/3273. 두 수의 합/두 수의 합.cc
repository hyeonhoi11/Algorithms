#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
vector<int> vec;
int cnt = 0;
int x, N;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cin >> N;
	
	for (int i = 0; i < N; i++) {
		int num;
		cin >> num;
		vec.push_back(num);
	}
	cin >> x;
	
	sort(vec.begin(), vec.end());
	int left = 0, right = N - 1;
	while (left < right) {
		int sum = vec[left] + vec[right];
		if (sum == x) {
			cnt++;
			left++;
			right--;
		}
		else if (sum < x) {
			left++;
		}
		else {
			right--;
		}
	}

	cout << cnt << '\n';
	return 0;
}