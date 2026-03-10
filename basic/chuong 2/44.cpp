#include <bits/stdc++.h>

using namespace std;

int g[1001][1001];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

//    if (fopen(".INP", "r")){
//        freopen(".INP", "r", stdin);
//        freopen(".OUT", "w", stdout);
//    }

	int m, n;
	cin >> m >> n;
	
	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++){
			cin >> g[i][j];
		}
	}
	
	int b = 0, w = 0;
	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++){
			if (g[i][j] == 3 && g[i][j+1] == 1 && g[i+1][j] == 0 && g[i+1][j+1] == 2){
				b++;
			}
			else if (g[i][j] == 2 && g[i][j+1] == 0 && g[i+1][j] == 1 && g[i+1][j+1] == 3){
				w++;
			}
		}
	}
	cout << b << " " << w;

    return 0;
}


