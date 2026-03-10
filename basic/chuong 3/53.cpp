#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    if (fopen("53.INP", "r")){
        freopen("53.INP", "r", stdin);
        freopen("53.OUT", "w", stdout);
    }

	string s;
	vector<int> s1;
	
	while (cin >> s){
		s1.push_back(s.size());
	}
	
	vector<pair<int, int>> kq;
	for (int i = 0; i < s1.size(); i++){
		kq.push_back({s1[i], i});
	}
	sort(kq.rbegin(), kq.rend());
	
	int res = 0;
	vector<int> check(s1.size(), 0);
	while (find(check.begin(), check.end(), 0) != check.end()){
		for (int i = 0; i < kq.size(); i++){
			if (kq[i].first == kq[i+1].first && kq[i+2].first == kq[i+3].first){
				
			}
		}
	}
	
    return 0;
}


