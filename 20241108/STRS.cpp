#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    if (fopen("STRS.INP", "r")) {
        freopen("STRS.INP", "r", stdin);
        freopen("STRS.OUT", "w", stdout);
    }
    
    string s;
    cin >> s;
    vector<int> so;
    string s1 = "";

    for (int i = 0; i < s.size(); i++) {
        if (isdigit(s[i])) {
            s1 += s[i];
        } else {
            if (!s1.empty()) {
                so.push_back(s[i] - '0');
                s1 = "";
            }
        }
    }
    if (!s1.empty()) so.push_back(stoi(s1)); 

    sort(so.begin(), so.end());

    string res = "";
    int p = 0;
    for (int i = 0; i < s.size(); i++) {
        if (isalpha(s[i])) {
            res += s[i];
        } else {
            res += to_string(so[p]);
            p++;
            while (i < s.size() && isdigit(s[i])) {
                i++;
            }
            i--;
        }
    }

    cout << res;

    return 0;
}

