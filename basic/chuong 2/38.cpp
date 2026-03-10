#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    long long A[n+1]={0};
    vector<long long> s(n+1,0);
    for (int i=1; i<n+1; i++){
        cin >> A[i];
    }
    for (int i=1; i < n+1; i++){
        s[i]=s[i-1]+A[i];
    }
    long long tong=s[n];
    if (tong!=0){
        vector<long long> uoc;
        for (long long i=1; i<=sqrt(tong); i++){
            if (tong%i==0){
                uoc.push_back(i);
                uoc.push_back(tong/i);
            }
        }
        int max=0;
        for (long long i:uoc){
            long long temp=tong;
            long long j=i;
            while (temp){
                temp-=i;
                if (find(s.begin(),s.end(),temp)!=s.end()){
                    continue;
                }
                else{
                    j=tong;
                    break;
                }
            }
            max=fmax(max,tong/j);
        }
        cout << max;
    }
    else{
        int cnt=0;
        for (int i=1; i<n+1; i++){
            cnt+=(s[i]==0);       
        }
        cout << cnt;
    }
}	
