#include<iostream>
#include<vector>
#include<algorithm>
#define y1 aaaa
using namespace std;

int M, N, K;
int a[104][104];
int visited[104][104];
int x1, y1, x2, y2;
int dy[] = { -1, 0, 1, 0 };
int dx[] = { 0, 1, 0, -1 };
vector<int> ret;

int dfs(int y, int x) {
	visited[y][x] = 1;
	int ret = 1;
	for (int i = 0; i < 4; i++) {
		int ny = y + dy[i];
		int nx = x + dx[i];
		if (ny < 0 || ny >= M || nx < 0 || nx >= N || visited[ny][nx] == 1) continue;
		if (a[ny][nx] == 1)continue;
		ret += dfs(ny, nx);
	}
	return ret;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cin >> M >> N >> K;
	for (int i = 0; i < K; i++) {
		cin >> x1 >> y1 >> x2 >> y2;
		for (int x = x1; x < x2; x++) {
			for (int y = y1; y < y2; y++) {
				a[y][x] = 1;
			}
		}
	}

	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			if (a[i][j] != 1 && visited[i][j] == 0) {
				ret.push_back(dfs(i, j));
			}
		}
	}
	sort(ret.begin(), ret.end());
	cout << ret.size() << "\n";
	for (int a : ret) cout << a << " ";
	return 0;

}