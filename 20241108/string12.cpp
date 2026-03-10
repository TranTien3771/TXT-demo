#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    if (fopen("string12.INP", "r")){
        freopen("string12.INP", "r", stdin);
        freopen("string12.OUT", "w", stdout);
    }
    
    string s; getline(cin, s);
    stringstream ss(s);
    vector<string> w;
    string word;
    while (ss >> word){
    	w.push_back(word);
	}
	sort(w.begin(), w.end());
	for (int i = 0; i < w.size(); i++){
		cout << w[i] << '\n';
	}
   	
    return 0;
}

