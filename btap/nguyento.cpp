#include <bits/stdc++.h>
#define int long long

using namespace std;

const int maxx = 2*1e7;
bool check[maxx];

vector<int> nt;

void snt(){
	for (int i = 2; i <= maxx; i++){
		check[i] = true;
	}
	check[0] = false;
	check[1] = false;
	for (int i = 2; i <= sqrt(maxx); i++){
		if (check[i] == true){
			for (int j = i*i; j <= maxx; j += i){
				check[j] = false;
			}
		}
	}
	for (int i = 2; i <= maxx; i++){
		if (check[i] == true){
			nt.push_back(i);
		}
	}
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    if (fopen("nguyento.inp", "r")){
    	freopen("nguyento.inp", "r", stdin);
    	freopen("nguyento.out", "w", stdout);
	}
	
	int q; cin >> q;
	int n;
	snt();
	for (int i = 1; i <= q; i++){
		cin >> n;
		int sum = 0;
		for (int i = 0; i < n; i++){
			sum += nt[i];
		}
		cout << sum << '\n';
	}	
    
    return 0;
}
