#include <bits/stdc++.h>

using namespace std;

const int maxx = 1e7;
vector<bool> check_nt(maxx + 1, true);

void snt(int n){
	check_nt[0] = check_nt[1] = false;
	for (int i = 2; i <= sqrt(n); i++){
		if (check_nt[i]){
			for (int j = i*i; j <= n; j+=i){
				check_nt[j] = false;
			}
		}
	}
}

bool sont(int x){
	return check_nt[x];
}

int tong(int n){
	int sum = 0;
	while (n > 0){
		sum += n%10;
		n /= 10;
	}
	return sum;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    if (fopen("PASSWORD.INP", "r")){
    	freopen("PASSWORD.INP", "r", stdin);
    	freopen("PASSWORD.OUT", "w", stdout);
	}
	
	int l, r; 
	cin >> l >> r;
	snt(r);
	
	for (int i = l; i <= r; i++){
		if (sont(i) && sont(tong(i))){
			cout << i << " ";
		}
	}
	
    
    return 0;
}
