#include <bits/stdc++.h>

using namespace std;

string a[100001];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    if (fopen("DIST.INP", "r")){
        freopen("DIST.INP", "r", stdin);
        freopen("DIST.OUT", "w", stdout);
    }
    
    int m, n; cin >> m >> n;
    for (int i = 0; i < m ; i++){
    	cin >> a[i];
	}
	int ans = 1e9;
	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++){
			for (int x = i; x < min(m, i+27); x++){
				for (int y = j; y < min(n, j+27); y++){
					if ((x != i || y != j) && a[i][j] == a[x][y]){
						ans = min(ans, x - i + y - j);
					}
				}
			}
		}
	}
	cout << ans;

    return 0;
}

