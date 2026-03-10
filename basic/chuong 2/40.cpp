#include <bits/stdc++.h>

using namespace std;

int maxn = 2e5;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin >> n;
    
    vector<int> fre(maxn, 0);
	vector<int> a(maxn);
    
    for (int i = 0 ; i < n; i++){
    	cin >> a[i];
    	fre[a[i]]++;
	}
	sort(a.begin(), a.end());
	for (int i = 0; i < n; i++){
		if (fre[a[i]] != 0){
			cout << a[i] << " " << fre[a[i]] << endl;
			fre[a[i]] = 0;			
		}
	}
    
    return 0;
}
