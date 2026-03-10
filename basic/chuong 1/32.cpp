#include <bits/stdc++.h>

#define int long long

using namespace std;

signed main() {
    int a, b, m, n;
    cin >> a >> b >> m >> n;
    
    long double sum = 0.1;
    int z = 1;
    int x = 1;
    int c = 1;
    for(int i = 0; i < m; i++) {
        z *= 10;
    }
    for(int i = a; i <= b; i++) {
        sum *= i;
        while(sum > 1) sum /= 10;
    }
    for(int i = 0; i < n; i++) {
        c *= 10;
    }
    for (int i = a; i <= b; i++) {
        x *= i;
        x %= c;
    }
    int s0 = (int)(sum * z);
    string s = to_string(s0);
    if(s.size() < m) {
        string s1 = s.insert(0,'0',m-s.size());
        cout << s1 << " " << setw(n) << setfill('0') << x;
    }
    else {
        cout << s0 << " " << setw(n) << setfill('0') << x;
     }
    return 0;
}
