#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

string WB[8] = {
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW"
};

string BW[8] = {
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB"
};

string board[50];

int cntWB(int x, int y) {
	int cnt = 0; 
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (board[x + i][y + j] != WB[i][j])
				cnt++;
		}
	}
	return cnt;
}

int cntBW(int x, int y) {
	int cnt = 0; 
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (board[x + i][y + j] != BW[i][j])
				cnt++;
		}
	}
	return cnt;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	int N, M;
	cin >> N >> M;
	cin.ignore();

	for (int i = 0; i < N; i++) {
		getline(cin, board[i]);
	}

	int minVal = 65;
	for (int i = 0; i + 8 <= N; i++) {
		for (int j = 0; j + 8 <= M; j++) {
			int tmp = min(cntWB(i, j), cntBW(i, j));
			if (tmp < minVal)
				minVal = tmp;
		}
	}
	cout << minVal;
	return 0;
}