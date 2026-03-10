#include <bits/stdc++.h>

using namespace std;

int pm[202][202];
int x[202][202];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

//    if (fopen(".INP", "r")){
//        freopen(".INP", "r", stdin);
//        freopen(".OUT", "w", stdout);
//    }
	
	int m, n;
	cin >> m >> n;
	for (int i = 1; i <= m; i++){
		for (int j = 1; j <= n; j++){
			cin >> pm[i][j];
			if (pm[i][j] == 1){
				x[i][j] = 1;
			}
		}
	}
	
	int res = 0;
	while (true){
		bool check = true;
		for (int i = 1; i <= m; i++){
			for (int j = 1; j <= n; j++){
				if (pm[i][j] == 1){
					check = false;
					int cnt = 0;
                    if(pm[i][j+1] == 0) cnt++;
                    if(pm[i][j-1] == 0) cnt++;
                    if(pm[i+1][j] == 0) cnt++;
                    if(pm[i-1][j] == 0) cnt++;
                    if(cnt >= 2){
                        x[i][j] = 0;
                    }
				}
			}
		}
		for (int i = 1; i <= m; i++){
			for (int j = 1; j <= n; j++){
				if (x[i][j] == 0){
					pm[i][j] = 0;
				}
			}
		}
		if (check) break;
		else res++;
	}	
	cout << res;
	

    return 0;
}


