#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    
    vector<int> left_zero(n, 0), right_zero(n, 0);

    // Tính left_zero
    for (int i = 1; i < n; ++i) {
        if (s[i - 1] == '0' && s[i] == '1') {
            left_zero[i] = left_zero[i - 1] + 1;
        } else if (s[i - 1] == '0') {
            left_zero[i] = left_zero[i - 1];
        }
    }

    // Tính right_zero
    for (int i = n - 2; i >= 0; --i) {
        if (s[i + 1] == '0' && s[i] == '1') {
            right_zero[i] = right_zero[i + 1] + 1;
        } else if (s[i + 1] == '0') {
            right_zero[i] = right_zero[i + 1];
        }
    }

    int max_length = 0;
    for (int i = 0; i < n; ++i) {
        if (s[i] == '1' && left_zero[i] == right_zero[i]) {
            max_length = max(max_length, 2 * left_zero[i] + 1);
        }
    }

    cout << max_length;
    return 0;
}

