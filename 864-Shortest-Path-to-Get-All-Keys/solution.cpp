#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();


// https://leetcode-cn.com/problems/shortest-path-to-get-all-keys/solution/zhuang-tai-ya-suo-bfs-by-lucifer1004/

int Solution::isKey(char c) {
	if (c>='a' && c<='z')
		return c-'a';
	else
		return -1;
}

int Solution::isLock(char c) {
	if (c>='A' && c<='Z')
		return c-'A';
	else
		return -1;
}

int Solution::shortestPathAllKeys(vector<string>& grid) {
	int n = grid.size(), m = grid[0].size();
	int sx, sy, keys=0;
	for (int i=0; i<n; i++) {
		for (int j=0; j<m; j++) {
			char c = grid[i][j];
			if (c == '@') {
				sx = i;
				sy = j;
			}
			if (isKey(c) >= 0)
				keys++;
		}
	}

	vector<vector<vector<int>>> dist(n, vector<vector<int>>(m, vector<int>(64, -1)));
	queue<State> q;
	q.push(State{sx, sy, 0});
	dist[sx][sy][0] = 0;
	int target = (1<<keys) - 1;

	while (!q.empty()) {
		State top = q.front();
		q.pop();
		for (int i=0; i<4; i++) {
			int x0 = top.x;
			int y0 = top.y;
			int state0 = top.state;
			int x = x0 + dx[i];
			int y = top.y + dy[i];
			if (x<0 || x>=n || y<0 || y>=m)
				continue;

			char c = grid[x][y];
			if (c == '#')
				continue;

			int lock = isLock(c);
			if (lock >= 0 && !((1<<lock) & state0))
				continue;

			int key = isKey(c);
			int new_state = state0;
			if (key >= 0)
				new_state |= (1<<key);
			if (new_state == target)
				return dist[x0][y0][state0]+1;
			if (dist[x][y][new_state] < 0) {
				dist[x][y][new_state] = dist[x0][y0][state0]+1;
				q.push(State{x, y, new_state});
			}
		}
	}
	return -1;
}
