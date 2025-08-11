#include<iostream>
#include<tuple>
#include<queue>
using namespace std;

int dy[] = { -1, 0, 1, 0 };
int dx[] = { 0, 1, 0, -1 };
int M, N, K, ret, x, y, ny, nx;
int a[51][51];
bool visited[51][51];

void dfs(int y, int x) {
	visited[y][x] = 1;
	for (int i = 0; i < 4; i++) {
		ny = y + dy[i];
		nx = x + dx[i];
		if (ny < 0 || nx < 0 || ny >= N || nx >= M) continue;
		if (a[ny][nx] == 1 && !visited[ny][nx]) {
			dfs(ny, nx);
		}
	}
	return;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int t_case;
	cin >> t_case;
	
	while (t_case--) {
		fill(&a[0][0], &a[0][0] + 51 * 51, 0);
		fill(&visited[0][0], &visited[0][0] + 51 * 51, 0);
		ret = 0;
		cin >> M >> N >> K;
		for (int i = 0; i < K; i++) {
			cin >> x >> y;
			a[y][x] = 1;
		}

		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				if (a[i][j] == 1 && !visited[i][j]) {
					dfs(i, j);
					ret++;
				}
			}
		}
		cout << ret << '\n';
	}
}