#include<iostream>
#include<string>
using namespace std;

int main() {
	int N;
	cin >> N;
	
	int arr[26];
	bool possible;
	string s_1, s_2;
	while (N--) {

		cin >> s_1 >> s_2;

		fill(arr, arr + 26, 0);
		for (int i = 0; i < s_1.length(); i++) {
			arr[s_1[i] - 'a']++;
			arr[s_2[i] - 'a']--;
		}

		possible = true;
		for (int i = 0; i < 26; i++) {
			if (arr[i] != 0) {
				possible = false;
				break;
			}
		}
		if (possible) cout << "Possible" << '\n';
		else cout << "Impossible" << '\n';
	}
}