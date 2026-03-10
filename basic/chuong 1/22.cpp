#include <bits/stdc++.h>
#define int long long

using namespace std;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int cnt = 0;
    int k = 0;
    
    for (int i = 1; cnt < n; i++) {
		int a = (k+i)/i * i;
        for (int j = 1; j <= i; j++) {
            cnt++;
            if (cnt == n) {
                cout << a;
                break;
            }
            if(j != i) a += i;
        }
        k = a;
    }

    return 0;
}
