#include <bits/stdc++.h>

using namespace std;

const int mod = 1e9 + 7;
const int maxx = 1e7;

int a[maxx];
int b[maxx];

vector<int> nt_a;
vector<int> check_a(maxx, 0);
vector<int> nt_b;
vector<int> check_b(maxx, 0);

void phan_tich(int n, vector<int>& nt, vector<int>& check) {
    if (n % 2 == 0) {
        if (check[2] == 0) nt.push_back(2);
        while (n % 2 == 0) {
            check[2]++;
            n /= 2;
        }
    }
    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) {
            if (check[i] == 0) nt.push_back(i);
            while (n % i == 0) {
                check[i]++;
                n /= i;
            }
        }
    }
    if (n > 2) {
        if (check[n] == 0) nt.push_back(n);
        check[n]++;
    }
}

void tinh_tong(vector<int>& nt_a, vector<int>& check_a, vector<int>& nt_b, vector<int>& check_b){
    long long sum = 1;
    bool fre = false;

    for (int i : nt_a) {
        if (check_b[i] > 0) {
            fre = true;
            int power = min(check_a[i], check_b[i]);
            for (int j = 1; j <= power; j++) {
                sum = (sum * i) % mod;
            }
        }
    }

    if (fre == false) {
        cout << 1 << endl;
    } else {
        cout << sum << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m;
    cin >> n >> m;
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        phan_tich(a[i], nt_a, check_a);
    }
    for (int i = 0; i < m; i++) {
        cin >> b[i];
        phan_tich(b[i], nt_b, check_b);
    }  
    
    tinh_tong(nt_a, check_a, nt_b, check_b);
    
    return 0;
}

