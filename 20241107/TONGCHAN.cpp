#include <bits/stdc++.h>
#define int long long

using namespace std;

int a[1000005];
vector<int> check(1000005, 0);

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    if (fopen("TONGCHAN.INP", "r")){
        freopen("TONGCHAN.INP", "r", stdin);
        freopen("TONGCHAN.OUT", "w", stdout);
    }
    
    int n; 
    cin >> n;
    long long cnt1 = 0, cnt2 = 0;
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    for (int i = 0; i < n; i++){
    	if (a[i] % 2 == 0){
    		cnt1++;
		}
		else {
			cnt2++;
		}
	}
	if (cnt2 % 2 == 1){
		cout << cnt1 * cnt2;
	}
	else {
		cout << cnt1*(cnt1-1)/2 + cnt2*(cnt2-1)/2;
	}
    
    return 0;
}

