#include <bits/stdc++.h>

using namespace std;

bool nt(long long x) {
    if (x < 2) return false;
    if (x == 2) return true; 
    if (x % 2 == 0) return false;
    for (long long i = 3; i <= sqrt(x); i += 2) {
        if (x % i == 0) return false;
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; 
    cin >> n;
    long long x;
    for (int i = 1; i <= n; i++) {
        cin >> x;
        long long sq = sqrt(x);
        if (sq * sq == x && nt(sq)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
