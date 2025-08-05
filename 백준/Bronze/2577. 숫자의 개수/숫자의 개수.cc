#include<iostream>
using namespace std;

int main() {
	int A, B, C;
	cin >> A >> B >> C;

	int arr[10] = { 0 };
	int ret = A * B * C;

	while (ret != 0) {
		arr[ret % 10]++;
		ret /= 10;
	}

	for (int i : arr) {
		cout << i << '\n';
	}
	return 0;
}