#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

//    if (fopen(".INP", "r")){
//        freopen(".INP", "r", stdin);
//        freopen(".OUT", "w", stdout);
//    }

    int m, n, k;
    cin >> m >> n >> k;
    vector<string> a(m);
    for (int i = 0; i < m; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++) {
        for (int x = 0; x < k; x++) { 
            for (int j = 0; j < n; j++) {
                for (int y = 0; y < k; y++) { 
                    cout << a[i][j];
                }
            }
            cout << endl; 
        }
    }
    return 0;
}
