#include <bits/stdc++.h>

using namespace std;

long long nt(long long x){
	if (x < 2) {
		return false;
	}
	for (int i = 2; i <= sqrt(x); i++){
		if (x % i == 0){
			return false;
		}
	}
	return true;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long long n, a;
	cin >> n;
	int cnt = 0;
	for (long long i = 1; i <= n; i++){
		cin >> a;
		if (nt(a) == false && a >= 6){
			cnt++;
		}
	}
	cout << cnt;
	return 0;
}

