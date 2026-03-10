#include<bits/stdc++.h>

using namespace std;

#define int long long
signed main () {
    if (fopen ("CPXY.INP","r"))	{
	    freopen ("CPXY.INP","r",stdin);
	    freopen ("CPXY.OUT","w",stdout);
	}

    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int cnt = 0;
    if (b<a || d<c) {
		cout<< "0"; return 0;
	}
    else {
        for (int x = a; x <= b; x++) {
            int miny = max(x + 1, c);
            int maxy = d;

            if (miny <= maxy) {
            cnt += (maxy - miny + 1);
            }
    }
        cout<<cnt;
    }
}
