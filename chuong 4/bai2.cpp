#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    if (fopen("NOTDIV.INP", "r"))
    {
        freopen("NOTDIV.INP", "r", stdin);
        freopen("NOTDIV.OUT", "w", stdout);
    }
    long long n, a, b;
    cin >> n >> a >> b;
    cout << n - n/a - n/b + n/(a*b);
    return 0;
}
