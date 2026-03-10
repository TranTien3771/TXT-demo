#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    if (fopen("string5.INP", "r")){
        freopen("string5.INP", "r", stdin);
        freopen("string5.OUT", "w", stdout);
    }
    
    string s; getline(cin, s);
    stringstream ss(s);
    vector<string> w;
    string word;
    while (ss >> word){
    	w.push_back(word);
	}
	cout << w.size() << endl;
	for (int i = 0; i < w.size(); i++){
		cout << w[i] << endl;
	}
    
    return 0;
}

