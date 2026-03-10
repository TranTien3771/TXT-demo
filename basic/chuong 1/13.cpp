#include <bits/stdc++.h>
#define int long long

using namespace std;

const int maxx = 1e6 + 1;
bool check[maxx];

bool palindrome(int x){
	string s = to_string(x);
	string s1 = s;
	reverse(s.begin(), s.end());
	return s == s1;
}

int tong(int x){
	int sum = 0;
	while (x > 0){
		sum += x % 10;
		x /= 10;
	}
	return sum;
}

void sangnt(int l, int r){
	for (int i = 2; i <= r; i++){
		check[i] = true;
	}
	for (int i = 2; i <= sqrt(r); i++){
		if (check[i] == true){
			for (int j = i*i; j <= r; j += i){
				check[j] = false;
			}
		}
	}
	int cnt = 0;
	for (int i = l; i <= r; i++){
		if (check[tong(i)] && palindrome(i)){
			cnt++;
		}
	}
	cout << cnt;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long l, r;
    cin >> l >> r;
    sangnt(l, r);
    
    return 0;
}
