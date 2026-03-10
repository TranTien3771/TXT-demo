#include <bits/stdc++.h>
#define int long long

using namespace std;


bool nt(int x){
	if (x < 2) return false;
	if (x == 2) return true;
	if (x % 2 == 0) return false;
	else {
		for (int i = 3; i <= sqrt(x); i += 2){
			if (x % i == 0) return false;
		}	
	}
	return true;
}

vector<int> kq;

void cnt(int y){
	string s = to_string(y);
	int cnt = 0;
	for (int i = 0; i < s.size(); i++){
		for (int j = 1; j <= s.size() - i; j++){
			string s1 = s.substr(i, j);
			int sum = stoll(s1);
			kq.push_back(sum);
		}
	}
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    cnt(n);
    int cnt = 0;
    sort(kq.begin(), kq.end());
    auto lap = unique(kq.begin(), kq.end());
    kq.erase(lap, kq.end());
    for (int i = 0; i < kq.size(); i++){
    	if (nt(kq[i]) == true){
    		cnt++;
		}
	}
	if (cnt != 0){
		cout << cnt;
	}
	else {
		cout << "NO PRIMES";
	}
    
    return 0;
}
