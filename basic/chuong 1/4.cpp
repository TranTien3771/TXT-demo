#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long long a, b, c;	
	cin >> a >> b >> c;
	int cnt = 0;
	for (long long i = 1; c > a * i ; i++){
		long long j = c - a * i;
		if (j%b == 0 && __gcd(i, j/b) == 1){
			cnt++;
		}
	}
	cout << cnt;
	return 0;
}
