#include<iostream>
using namespace std;



int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n;
	while (cin >>n) {
		long long cnt = 1, ret = 1;
		while (true) {
			if (cnt % n == 0) {
				cout << ret << '\n';
				break;
			}
			else {
				cnt = (cnt * 10) + 1;
				cnt %= n;
				ret++;
			}
		}
	}
	return 0;
}
