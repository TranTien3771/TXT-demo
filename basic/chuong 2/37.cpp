#include <bits/stdc++.h>

using namespace std;

const int maxx = 1e6;
bool check[maxx + 1];

void sangnt() {
    fill(check, check + maxx + 1, true);
    check[0] = check[1] = false;
    for (int i = 2; i * i <= maxx; i++) {
        if (check[i]) {
            for (int j = i * i; j <= maxx; j += i) {
                check[j] = false;
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; 
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sangnt();

    int max_len = 0;
    int cnt = 0;
    int fre = 0;

    for (int i = 0; i < n; i++) {
        if (check[a[i]]) {
            cnt++;
        } else {
            if (cnt > 0) {
                if (cnt == max_len) {
                    fre++;
                } else if (cnt > max_len) {
                    max_len = cnt;
                    fre = 1;
                }
                cnt = 0;
            }
        }
    }
    if (cnt == max_len) {
        fre++;
    } else if (cnt > max_len) {
        max_len = cnt;
        fre = 1;
    }

    cout << fre << " " << max_len;

    return 0;
}

