#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;

    int n = s.size();
    int cnt[256] = {0}; 

    for (int i = 0; i < n; i++) {
        cnt[s[i]]++;
    }

    string res = "";
    string left = "";
    int ocnt = 0; 

    for (char c = 'A'; c <= 'Z'; c++) {
        if (cnt[c] > 0) {
            left += string(cnt[c] / 2, c);
            if (cnt[c] % 2 == 1) {
                ocnt++; 
                res += c;
            }
        }
    }

    for (char c = 'a'; c <= 'z'; c++) {
        if (cnt[c] > 0) {
            left += string(cnt[c] / 2, c);
            if (cnt[c] % 2 == 1) {
                ocnt++;
                res += c;
            }
        }
    }
    if (ocnt > 1) {
        cout << "NO SOLUTION" << endl; 
        return 0;
    }

    string right = left;
    reverse(right.begin(), right.end());

    res = left + res + right;

    cout << res;

    return 0;
}
