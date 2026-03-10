#include <bits/stdc++.h>

using namespace std;

bool check(int x, int y, int n){
	if (n < x) return false;
	return (n - x) % y == 0;
}

bool nt(int x){
	if (x < 2) return false;
	else {
		for (int i = 2; i <= sqrt(x); i++){
			if (x % i == 0) return false;
		}
	}
	return true;
}


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int x, y, a;
	cin >> a >> x >> y;
	int n;
	int cnt = 0;
	for (int i = 1; i <= a; i++){
		cin >> n;
		if (nt(n) && check(x, y, n)){
			cnt++;
		}
	}
	cout << cnt;
	
	return 0;
}

