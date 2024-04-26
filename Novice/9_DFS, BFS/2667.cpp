#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, cnt;
vector<vector<int>> v;
vector<int> ans;
vector<vector<bool>> visited;

void dfs(int x, int y) {
    if(visited[x][y])
        return;

    visited[x][y] = true; // 방문 표기

    for (int i = x; i < n; i++) {
        for (int j = y; j < n; j++) {
            if (v[i][j] == 1) {
                cnt++;
                dfs(i + 1, j);
                dfs(i, j + 1);
            }
        }
    }
}

int main() {
    // 입력
    cin >> n;
    cnt = 0;
    v.assign(n, vector<int>(n, 0));
    visited.assign(n, vector<bool>(n, false));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> v[i][j];
        }
    }

    //연산
    dfs(0, 0);

    //출력
    sort(ans.begin(), ans.end());
    for (int &i: ans) {
        cout << i << '\n';
    }

    return 0;
}