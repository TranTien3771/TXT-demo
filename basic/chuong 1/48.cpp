#include <bits/stdc++.h>

using namespace std;

int tree[1003];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

//    if (fopen(".INP", "r")){
//        freopen(".INP", "r", stdin);
//        freopen(".OUT", "w", stdout);
//    }

	int n; cin >> n;
	for (int i = 0; i < n; i++){
		cin >> tree[i];
	}
	
	int cnt1 = 0;
	int cnt2 = 0;
	for (int i = 0; i < n; i++){
		if (tree[i+1] <= tree[i]){
			while (tree[i+1] <= tree[i]){
				cnt1++;
			}
		}
		if (cnt1 > 0){
			cnt2++;
		}
	}
	cout << cnt2;
	

    return 0;
}


