#include <bits/stdc++.h>

using namespace std;

int a[1004][1004];

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
			cin >> a[i][j];
		}
	}
	
	long long sum = 0;
	long long maxn = -1e9;
	int p = 0;
	
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			sum += a[j][i];
		}
		if (sum > maxn){
			maxn = sum;
			p = i;
		}
		sum = 0;	
	}
	cout << p+1 << " " << maxn;
	

    return 0;
}


