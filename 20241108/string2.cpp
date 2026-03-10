#include <bits/stdc++.h>

using namespace std;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    if (fopen("string2.INP", "r")){
        freopen("string2.INP", "r", stdin);
        freopen("string2.OUT", "w", stdout);
    }
    
    string s; getline(cin, s);
    int cnt0 = 0, cnt1 = 0, cnt2 = 0, cnt3 = 0, cnt4 = 0, cnt5 = 0, cnt6 = 0, cnt7 = 0, cnt8 = 0, cnt9 = 0;
    for (int i = 0; i < s.size(); i++){
    	if (s[i] == '0'){
    		cnt0++;
		}
    	else if (s[i] == '1'){
    		cnt1++;
		}
		else if (s[i] == '1'){
    		cnt1++;
		}
		else if (s[i] == '2'){
    		cnt2++;
		}
		else if (s[i] == '3'){
    		cnt3++;
		}
		else if (s[i] == '4'){
    		cnt4++;
		}
		else if (s[i] == '5'){
    		cnt5++;
		}
		else if (s[i] == '6'){
    		cnt6++;
		}
		else if (s[i] == '7'){
    		cnt7++;
		}
		else if (s[i] == '8'){
    		cnt8++;
		}
		else if (s[i] == '9'){
    		cnt9++;
		}
	}
	cout << cnt0 << '\n' << cnt1 << '\n' << cnt2<< '\n' << cnt3 << '\n' << cnt4 << '\n' << cnt5 << '\n' << cnt6 << '\n' << cnt7 << '\n' << cnt8 << '\n' << cnt9; 
	
    
    return 0;
}

