#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
//    if (fopen(".INP", "r")){
//        freopen(".INP", "r", stdin);
//        freopen(".OUT", "w", stdout);
//    }
	vector<int> cnt(7, 0);
	vector<string> name = {"Bessie", "Elsie", "Daisy", "Gertie", "Annabelle", "Maggie", "Henrietta"};
	
	int n;
	cin >> n;
	
	string b;
	int s;
	
	for(int i = 1; i <= n; i++){
		cin >> b >> s;
		for (int j = 0; j < 7; j++){
			if (b == name[j]){
				cnt[j] += s;
				break;
			}
		}
	}
	int minn = 1e9;
	for (int i = 0; i < 7; i++){
		if (cnt[i] != 0){
			minn = min(minn, cnt[i]);
		}
	}
    
    int min2 = 1e9;
    
    for(int i = 0; i < cnt.size(); i++){
    	if (cnt[i] < min2 && cnt[i] > minn){
    		min2 = cnt[i];
		}
	}
	
	int cnt2 = 0;
	int p = 0;
	for (int i = 0; i < 7; i++){
		if (min2 == cnt[i]){
			cnt2++;
			p = i;
		}
	}
	
	if (cnt2 == 1){
		cout << name[p];
	}
	else {
		cout << "Tie";
	}
	

    return 0;
}

