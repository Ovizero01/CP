//https://codeforces.com/contest/2139/problem/B
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n, m; cin >> n >> m;
    vector <ll> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());

    ll ans = 0, sec = 1;
    if(m < n){
        for(int i = n - m; i < n; i++, sec++){
            ans += (a[i] * sec);
        }
    }
    else{
        ans += a[0] * (m - n + 1);
        sec = m - n + 2;
        for(int i = 1; i < n; i++, sec++){
            ans += (a[i] * sec);
        }
    }

    cout << ans << '\n';
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