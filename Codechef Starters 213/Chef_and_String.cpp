//https://www.codechef.com/problems/WENOTI
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n, k; cin >> n >> k;
    string s; cin >> s;

    for(int i = 1; i < n; i++){
        if(s[i] == 'I') s[i] = s[i - 1];
    }
    for(int i = n - 2; i >= 0; i--){
        if(s[i] == 'I') s[i] = s[i + 1];
    }
    
    ll ans = 0;
    for(int i = 0; i < n - 1; i++){
        if(s[i] == s[i + 1]) ans++;
    }
    
    if(s[0] == s[n - 1]) cout << (ans * k) + (k - 1) << '\n';
    else cout << ans * k << '\n';
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; cin >> T;
    while(T--){
        solve();
    }
    return 0;
}