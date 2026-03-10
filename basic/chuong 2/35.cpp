#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; 
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    int cur = (a[0] != 0);
    int cnt = 0;
    int res = cur;

    for (int i = 0; i < n - 1; i++) {
        if (a[i] * a[i+1] < 0) {
            cur++;
        }
        else {
        	cur = (a[i+1] != 0);
		}
		res = max(res, cur);
    }
	
	cur = 0;
	for (int i = 0; i < n; i++){
		if (a[i] != 0){
			if (a[i] * a[i-1] < 0){
				cur++;
			}
			else {
				cur = 1;
			}
			if (cur == res){
				cnt++;
			}			
		}
		else {
			cur = 0;
		}
	}
    
	
	cout << cnt << " " << res;
    
    
    return 0;
}

