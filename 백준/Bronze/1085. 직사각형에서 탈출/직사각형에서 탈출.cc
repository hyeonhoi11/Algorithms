#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int x, y, w, h;
	cin >> x >> y >> w >> h;

	int ret = 0;
	ret = min(min(min(x, w - x),y),h-y);
	cout << ret;

}