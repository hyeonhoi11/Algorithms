#include<iostream>
#include<string>
using namespace std;

int main() {
	string s;
	int arr[10] = { 0 };
	cin >> s;

	int cnt = 0;
	for (int i = 0; i <s.size(); i++) {
		if (s[i] - '0' >= 0 && s[i] - '0' <= 9) {
			if (s[i] - '0' == 6 || s[i] - '0' == 9) {
				if (arr[6] < arr[9])
					arr[6]++;
				else
					arr[9]++;
			}
			else {
				arr[s[i] - '0']++;
			}
		}
	}

	int m = 0;
	for (int i = 0; i < 10; i++) {
		if (arr[i] > m)
			m = arr[i];
	}

	cout << m << '\n';
}