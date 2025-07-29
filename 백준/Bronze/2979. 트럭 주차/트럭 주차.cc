#include<iostream>
using namespace std;

int a[100];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int A, B, C;
	cin >> A >> B >> C;

	for (int i = 0; i < 3; i++) {
		int start, end;
		cin >> start >> end;
		for (int i = start; i < end; i++) {
			a[i]++;
		}
	}

	int cnt = 0;
	for (int i = 0; i < 100; i++) {
		if (a[i] == 1) {
			cnt += A * a[i];
		}
		else if (a[i] == 2) {
			cnt += B * a[i];
		}
		else if (a[i] == 3) {
			cnt += C * a[i];
		}
		else 
			continue;
	}

	cout << cnt;
}