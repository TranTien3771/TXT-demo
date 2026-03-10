#include <bits/stdc++.h>
#define int long long 
using namespace std;
signed main()
{
    int n;
    cin>>n;
    string s = "", s1 = "123456790", s2 = "098765432";
    int n1 = (n-1)/9, n2 = n - 9*n1;
        for (int i=1; i<=n2; i++)
            s.insert(s.length(), 1, (char)(i + '0'));
             
        for (int i=n2-1; i>0; i--)
            s.insert(s.length(), 1, (char)(i + '0'));
        if (n>9)
        {
            for (int i=0; i<n1; i++)
                s.insert(0, s1);
            for (int i=0; i<n1; i++)
                s.insert(s.length()-1, s2);
        }
        cout<<s<<endl;
    return 0;
}

