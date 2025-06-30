#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	vector<int> vec(3);

	for (int i = 0; i < 3; i++) {
		cin >> vec[i];
	}

	sort(vec.begin(), vec.end());

	for (int i=0; i<3; i++){
        cout << vec[i];
		if(i<2) cout << ' ';
    }
}