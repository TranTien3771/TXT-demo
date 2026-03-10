#include <bits/stdc++.h>

using namespace std;

int v[1000005];

signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	if (fopen("exp.inp", "r")){
		freopen("exp.inp", "r", stdin);
		freopen("exp.out", "w", stdout);	
	}
	int n, k; cin >> n >> k;
	for (int i = 1; i <= n; i++){
		cin >> v[i];
	}
	int sum = 0;
	int p;
	while (k > 0){
		int max_v = -1e9;
		for (int i = 1; i < n; i++){
			if (v[i] + v[i+1] > max_v){
				max_v = v[i] + v[i+1];
				p = i;
			}
		}
		sum += max_v;
		k--;
		for (int i = p; i < p+2; i++){
			v[i] = 0;
		}
	}
	for (int i = 1; i <= n; i++){
		cout << v[i] << " ";
	}
	cout << sum;
	return 0;
}
