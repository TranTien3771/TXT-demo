#include <bits/stdc++.h>
using namespace std;

bool check(int n){
    int m=2*n;
    int z=(int)sqrt(m);
    return z*(z+1)==m;
}
int main(){
    int n;
    cin >> n;
    int x[n+1]={0};
    for (int i=1; i<n+1; i++){
        cin >> x[i];
    }
    int s[n+1]={0};
    for (int i=1; i<n+1; i++){
        if (x[i]>=x[i-1]){
            if (check(x[i])){
                s[i]=s[i-1]+1;
            }
            else{
                s[i]=0;
            }
        }
        else if(check(x[i])){
            s[i]=1;
        }
        else{
            s[i]=0;
        }
    }
    int max=-1;
    for (int i=1; i<n+1; i++){
        max=fmax(max,s[i]);
    }
    if (max==1){
        cout << 0;
    }
    else{
        cout << max;
    }
}
