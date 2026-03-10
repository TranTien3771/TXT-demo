#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

//    if (fopen(".INP", "r")){
//        freopen(".INP", "r", stdin);
//        freopen(".OUT", "w", stdout);
//    }
	int t;
	cin >> t;
	
	int n, k;
	
	vector<int> tong(200005, 0);
	
	int b, c;
	
	for (int i = 1; i <= t; i++){
		cin >> n >> k;
		for (int i = 1; i <= k; i++){
			cin >> b >> c;
			tong[b] += c;
		}
	}
	

    return 0;
}


