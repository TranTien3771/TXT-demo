#include <bits/stdc++.h>
#define int long long

using namespace std;

const int maxx = 1e6 + 1;
bool check[maxx];

vector<int> arr_nt;

void sangnt(int n){
	for (int i = 2; i <= n; i++){
		check[i] = true;
	}
	for (int i = 2; i <= sqrt(n); i++){
		if (check[i] == true){
			for (int j = i*i; j <= n; j += i){
				check[j] = false;
			}
		}
	}
	for (int i = 2; i <= n; i++){
		if (check[i] == true){
			arr_nt.push_back(i);
		}
	}
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    if (fopen("TICH.INP", "r")){
    	freopen("TICH.INP", "r", stdin);
    	freopen("TICH.OUT", "w", stdout);
	}
    
	int x; cin >> x;
	int n;
	sangnt(maxx);
	for (int i = 1; i <= x; i++){
		int max_nt = -1;
		cin >> n;
		for (int j = 0; j < arr_nt.size() - 2; j++){
			if (arr_nt[j] * arr_nt[j+1] * arr_nt[j+2] <= n){
				max_nt = max(max_nt, arr_nt[j] * arr_nt[j+1] * arr_nt[j+2]);
			}
			else {
				break;
			}
		}
		cout << max_nt << endl;
	}
    
    return 0;
}

