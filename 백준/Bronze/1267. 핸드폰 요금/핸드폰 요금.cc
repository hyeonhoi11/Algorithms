#include<iostream>
#include<vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int N;
	int temp, m = 0, y = 0;
	cin >> N;
	
	for (int i = 0; i < N; i++) {
		cin >> temp;
		y += (temp / 30 + 1) * 10;
		m += (temp / 60 + 1) * 15;
	}

	if (m < y) cout << "M " << m;
	else if (m > y) cout << "Y " << y;
	else if (m == y) cout << "Y M " << m;

	return 0;

}