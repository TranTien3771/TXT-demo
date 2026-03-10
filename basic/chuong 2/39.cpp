#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin >> n;
    int a[500];
    for (int i = 1; i <= n; i++){
    	cin >> a[i];
	}
	
	int len = 0;
	int plus = 1e9;
	
	for (int i = 1; i < n; i++){
		for (int j = i + 1; j <= n; j++){
			int cnt = 2;
			int cur = a[j] - a[i];
			int next = a[j] + cur;
			for (int k = j + 1; k <= n; k++){
				if (a[k] == next){
					cnt++;
					next += cur;
				}
			}
			if (cnt > len){
				len = cnt;
				plus = cur;
			}
			else if (cnt == len) {
				plus = min(plus, cur);
			}
		}
	}
	
	if (len == 2) cout << 0;
	else cout << len << " " << plus;
    
    return 0;
}
