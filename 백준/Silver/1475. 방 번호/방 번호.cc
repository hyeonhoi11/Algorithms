#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	string s;
	int arr[10] = { 0 };

	cin >> s;
	
	for (int c = 0; c <= 9; c++) {
		for (auto a :s)
			if (c+'0' == a)
				arr[c]++;
	}

	int m = 0;
	for (int i = 0; i < 10; i++) {
		if (i == 6 || i == 9) continue;
		if (arr[i] > m)
			m = arr[i];
	}

	cout << max(m, (arr[6] + arr[9] + 1) / 2);
}