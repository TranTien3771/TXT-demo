#include <bits/stdc++.h>
using namespace std;

void tlp(string a, string b) {
    string kq = "";
    int mem = 0;
    int i = a.size() - 1;
    int j = b.size() - 1;
    while (i >= 0 || j >= 0 || mem) {
        int x = (i >= 0) ? (a[i--] - '0')*((char)a[i--] >= 48 && (char)a[i--] <= 57) + (a[i--] - 55)*((char)a[i--] >= 65 && (char)a[i--] <= 90) : 0;
        int y = (j >= 0) ? (b[j--] - '0')*((char)b[i--] >= 48 && (char)b[i--] <= 57) + (b[i--] - 55)*((char)b[i--] >= 65 && (char)b[i--] <= 90) : 0;

        int sum = x + y + mem;
        kq += to_string(sum % 16); 
        mem = sum / 16; 
    }

    reverse(kq.begin(), kq.end());
    cout << kq << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s, s1;
    cin >> s >> s1;
    tlp(s, s1);

    return 0;
}

