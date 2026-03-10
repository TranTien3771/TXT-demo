#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int k; cin >> k;
    string s; cin >> s;
    int n = s.size();
    string res = "";
    for (int i = 0; i < n; i++){
    	while (k > 0 && res != "" && res[res.size()-1] > s[i]){
			res.pop_back();
			k--;
		}
		res += s[i];
	}
    if(res[0] == '0'){
        for(int i = 0; i < res.size(); i++){
            if(res[i] != '0'){
            	swap(res[0], res[i]);
            	break;
			} 
        }
    }
    while (k > 0 && res.size() > 0){
		res.pop_back();
		k--;
	}
	cout << res;
    return 0;
}
