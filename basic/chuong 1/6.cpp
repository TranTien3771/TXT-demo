#include <bits/stdc++.h>
using namespace std;

void bp(string a, string b) {
    string kq = "";
    int mem = 0;
    int i = a.size() - 1;
    int j = b.size() - 1;
    while (i >= 0 || j >= 0 || mem) {
        int x = (i >= 0) ? a[i--] - '0' : 0;
        int y = (j >= 0) ? b[j--] - '0' : 0;

        int sum = x + y + mem;
        kq += to_string(sum % 8); 
        mem = sum / 8; 
    }

    reverse(kq.begin(), kq.end());
    cout << kq << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s, s1;
    cin >> s >> s1;
    bp(s, s1);

    return 0;
}

