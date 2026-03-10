#include <bits/stdc++.h>
#define int long long

using namespace std;

int sn(int a, int b){
	for (int i = 1; i <= 10 ; i++){
		int x = a * (int)pow(10, i + 1) + b;
		if (x % 89 == 0){
			int n = x / 89;
			if (to_string(n).size() == i){
				return n;
			}
		}
	}
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a, b;
    cin >> a >> b;
    cout << sn(a, b);
    
    return 0;
}
