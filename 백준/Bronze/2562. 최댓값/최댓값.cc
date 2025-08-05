#include<iostream>
using namespace std;

int main() {
	int arr[9];

	for (int i = 0; i < 9; i++) {
		cin >> arr[i];
	}

	int m = -1;
	int idx = -1;

	for (int i = 0; i < 9; i++) {
		if (m < arr[i]) {
			m = arr[i];
			idx = i;
		}
	}
	cout << m << '\n' << idx+1;

	return 0;
}