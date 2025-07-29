#include<iostream>
#include<string>
#include<vector>
using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int num;
	cin >> num;

	int arr[26] = { 0 };

	for (int i = 0; i < num; i++){
		string name;
		cin >> name;
		arr[name[0] - 'a']++;
	}

	vector<char> vec;
	for (int i = 0; i < 26; i++) {
		if (arr[i] >= 5) {
			vec.push_back(i + 'a');
		}
		else {
			continue;
		}
	}

	if (vec.empty())
		cout << "PREDAJA" << '\n';
	else {
		for (int i = 0; i < vec.size(); i++) {
			cout << vec[i];
		}
	}
	return 0;
}