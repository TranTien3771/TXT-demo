#include <bits/stdc++.h>

using namespace std;

void bp(string s){
	string kq = "";
	while (s.size() % 3 != 0){
		s.insert(s.begin(), '0');
	}
	for (int i = 0; i < s.size(); i += 3){
		string s1 = s.substr(i, 3);
		if (s1 == "000")     {kq += "0";}
		else if (s1 == "001"){kq += "1";}
		else if (s1 == "010"){kq += "2";}
		else if (s1 == "011"){kq += "3";}
		else if (s1 == "100"){kq += "4";}
		else if (s1 == "101"){kq += "5";}
		else if (s1 == "110"){kq += "6";}
		else if (s1 == "111"){kq += "7";}
	}
	while (kq.size() > 1 && kq[0] == '0'){
		kq.erase(0, 1);
	}
	cout << kq;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s; 
	cin >> s;
	bp(s);
	return 0;
}
