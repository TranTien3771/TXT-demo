#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; 
    cin >> n;
    const int mod = 1e9 + 7;
    unordered_map<int, int> freq;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        freq[x]++;
    }

    long long cnt = 0;
    for (auto &p : freq) {
        long long k = p.second;
        if (k > 1) {
            cnt = (cnt + (k * (k - 1) / 2) % mod) % mod;
        }
    }

    cout << cnt;
    
    return 0;
}

