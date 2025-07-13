#include<iostream>

using namespace std;

int main() {
	int t_case = 3;
	while (t_case--) {
		int arr[4] = { 0 };
		int cnt = 0;
		for (int i = 0; i < 4; i++) {
			cin >> arr[i];
			if (arr[i] == 1) {
				cnt++;
			}
		}
		switch (cnt) {
		case 0:
			cout << 'D' << '\n';
			break;
		case 1:
			cout << 'C' << '\n';
			break;
		case 2:
			cout << 'B' << '\n';
			break;
		case 3:
			cout << 'A' << '\n';
			break;
		case 4:
			cout << 'E' << '\n';
			break;
		}
	}
}