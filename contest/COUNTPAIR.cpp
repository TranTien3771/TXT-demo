#include <bits/stdc++.h>
#define int long long

using namespace std;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s;
    cin >> s;
    int cnt = 0, cnt2 = 0;
    
    for (int i = s.size() - 1; i >= 0; i--) {
        if (s[i] == '2') {
            cnt2++;
        } 
		else if (s[i] == '1') {
            cnt += cnt2;
        }
    }
    
    cout << cnt;
    
    return 0;
}

