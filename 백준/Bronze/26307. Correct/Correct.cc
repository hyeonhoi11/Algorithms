#include<iostream>
using namespace std;

int main() {
	int H, M, tot = 0;
	cin >> H >> M;

	H = H - 9;
	M = M - 0;

	tot = H * 60 + M;
	cout << tot << '\n';
}