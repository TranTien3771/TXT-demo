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
    
	int n, k; cin >> n >> k;
	sangnt(maxx);
	int maxx = -1;
	
	for (int i = 0; i <= arr_nt.size() - k; i++){
		
		int sum = 1;
		for (int j = i; j < i + k; j++){
			sum *= arr_nt[j];
			if (sum > n){
				break;
			}
		}
		if (sum <= n){
			maxx = max(sum, maxx);
		}
	}
	cout << maxx << endl;
	
    
    return 0;
}
