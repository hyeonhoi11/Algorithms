#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	while (true) {
		int arr[3];
		for (int i = 0; i < 3; i++) {
			cin >> arr[i];
		}

		if (arr[0] == 0 && arr[1] == 0 && arr[2] == 0)
			break;

		sort(arr, arr+3);

		if (pow(arr[0], 2) + pow(arr[1], 2) == pow(arr[2], 2)) {
			cout << "right\n";
		}
		else
			cout << "wrong\n";
	}

	return 0;
}