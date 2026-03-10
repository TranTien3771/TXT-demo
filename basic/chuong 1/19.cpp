#include <bits/stdc++.h>
#define int long long

using namespace std;

int nhan(int a, int b, int mod){
    if (b == 0) return 0;
    int t = nhan(a, b / 2, mod);
    t = t + t;
    if (b % 2 == 1)
        t = t + a;
    return t % mod;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a, b, c, m;
    cin >> a >> b >> c >> m;
    int s1 = nhan(abs(a), abs(b), m);
    int s2 = nhan(abs(b), abs(c), m);
    int s3 = nhan(abs(c), abs(a), m);
    if ((a >= 0 && b >= 0 && c <= 0) || (a <= 0 && b <= 0 && c >= 0)){
    	cout << s1;
	}
	else if ((b >= 0 && c >= 0 && a <= 0) || (b <= 0 && c <= 0 && a >= 0)){
		cout << s2;
	}
	else if ((c >= 0 && a >= 0 && b <= 0) || (c <= 0 && a <= 0 && b >= 0)) {
		cout << s3;
	}
	else {
		cout << max(s1, max(s2, s3));
	}
    
    return 0;
}
