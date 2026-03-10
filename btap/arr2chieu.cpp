#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	freopen("TROCHOI.inp", "r", stdin);
	freopen("TROCHOI.out", "w", stdout);
	int m, n; cin >> m >> n;
	vector<int> x;
	int res[m][n];
	int a;
	for (int i = 0; i < n*m; i++){
		cin >> a;
		x.push_back(a);
	}
	sort(x.begin(), x.end());
	int p = 0;
	for (int i = 0; i < m; i++){
		if (i % 2 != 0){
			for (int j = n-1; j >= 0; j--){
				res[i][j] = x[p++];
			}
		}
		else {
			for (int j = 0; j < n; j++){
				res[i][j] = x[p++];
			}		
		}
	}
	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++){
			cout << res[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
