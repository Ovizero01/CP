//https://www.codechef.com/problems/ADD13
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n, m; cin >> n >> m;
    if(m >= 3){
       ll ans = n * 3;
       if(ans >= m && (ans - m) % 2 == 0 && (ans - m) / 2 <= n) cout << "YES\n";
       else cout << "NO\n";
    }
    else{
        if(n == m) cout << "YES\n";
        else cout << "NO\n";
    }
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