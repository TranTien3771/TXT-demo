#include <bits/stdc++.h>
#define int long long

using namespace std;

const int MOD = 20122007;
vector<int> u;

void uoc(int x) {
    for (int i = 1; i <= sqrt(x); i++) {
        if (x % i == 0) {
            u.push_back(i);
            if (i != x / i){
            	u.push_back(x/i);
			}
		}
    }
}

int power(int a, int b){
    if (b == 0) return 1;
    int t = power(a, b / 2);
    t = (t * t) % MOD;
    if (b % 2 == 1)
        t = (t * a) % MOD;
    return t;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a;
    cin >> a;
    int sum = 1;
    uoc(a); 
    for (int i = 0; i < u.size(); i++) {
        sum = sum * (power(3, u[i]) - 1 + MOD) % MOD;
    }
    
    cout << sum << endl;
    
    return 0;
}

