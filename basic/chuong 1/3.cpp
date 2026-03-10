#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	long long m, n, k;
	cin >> m >> n >> k;
	long long c = 1;
	int mod = pow(10, k);
	for (int i = 1; i <= n; i++){
		c = (c*m) % mod;
	}
	string kq = to_string(c);
	if (k < kq.size()){
		cout << kq.substr(kq.size() - k);
	}
	else {
		cout << setfill('0') << setw(k) << kq;
	}
	return 0;
}
