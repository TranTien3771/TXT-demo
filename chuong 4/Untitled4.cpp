#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int m, n;
    cin >> m >> n;

    int s[m+2][n+2];
    for (int i = 0; i <= m+1; i++) {
        for (int j = 0; j <= n+1; j++) {
            s[i][j] = INT_MIN;
        }
    }
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> s[i][j];
        }
    }
    int cnt = 0;
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (s[i][j] >= s[i-1][j] && s[i][j] >= s[i+1][j] &&
                s[i][j] >= s[i][j-1] && s[i][j] >= s[i][j+1] &&
				s[i][j] >= s[i+1][j+1] && s[i][j] >= s[i-1][j-1] &&
				s[i][j] >= s[i-1][j+1] && s[i][j] >= s[i+1][j-1]) {
                cnt++;
            }
        }
    }
    cout << cnt;

    return 0;
}

