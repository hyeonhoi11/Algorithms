#include<iostream>
using namespace std;

long long A, B, C;

long long cal(long long A, long long B) {
	if (B == 1) return A % C;

	long long ret = cal(A, B / 2);
	ret = (ret * ret) % C;
	if (B % 2)
		ret = (ret * A) % C;
	return ret;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cin >> A >> B >> C;
	cout << cal(A, B) << '\n';
	return 0;

}