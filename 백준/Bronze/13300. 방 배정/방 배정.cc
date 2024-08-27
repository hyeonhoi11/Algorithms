#include<iostream>
using namespace std;

int main() {
	int N, K, Y;
	cin >> N >> K;
	int male[6] = { 0 }, female[6] = { 0 };
	bool Sex;
	int room = 0; 

	while (N--) {
		cin >> Sex >> Y;
		if (Sex)
			male[Y - 1]++;
		else
			female[Y - 1]++;
	}

	for (int i = 0; i < 6; i++) {
		int m, f;
		if (male[i] % K != 0)
			m = male[i] / K + 1;
		else
			m = male[i] / K;
		if (female[i] % K != 0)
			f = female[i] / K + 1;
		else
			f = female[i] / K;

		room += m + f;
	}
	cout << room;
}