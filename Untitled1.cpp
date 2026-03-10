#include <bits/stdc++.h>
using namespace std;

bool vatcan[8][8];
bool visited[8][8];

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

int ans = 0;

bool inside(int x, int y){
    return x >= 0 && x < 8 && y >= 0 && y < 8;
}

void dfs(int x, int y, int dir, int cnt){
    ans = max(ans, cnt);

    int nx = x + dx[dir];
    int ny = y + dy[dir];

    // Không thể đi tiếp → rẽ trái / phải
    if (!inside(nx, ny) || vatcan[nx][ny]){
        int left = (dir + 3) % 4;
        int right = (dir + 1) % 4;

        dfs(x, y, left, cnt);
        dfs(x, y, right, cnt);
        return;
    }

    // Đi vào ô đã đi → dừng
    if (visited[nx][ny]) return;

    // Đi thẳng
    visited[nx][ny] = true;
    dfs(nx, ny, dir, cnt + 1);
    visited[nx][ny] = false;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    if (fopen("ROBOT.INP", "r")){
        freopen("ROBOT.INP", "r", stdin);
        freopen("ROBOT.OUT", "w", stdout);
    }

    int n;
    cin >> n;

    memset(vatcan, false, sizeof(vatcan));
    memset(visited, false, sizeof(visited));

    for (int i = 0; i < n; i++){
        string s;
        cin >> s;
        int y = s[0] - 'A';   // cột
        int x = s[1] - '1';   // hàng
        vatcan[x][y] = true;
    }

    // Vị trí bắt đầu A1 = (0,0)
    visited[0][0] = true;

    // Hướng ban đầu: xuống (2)
    dfs(0, 0, 2, 1);

    cout << ans;
    return 0;
}
