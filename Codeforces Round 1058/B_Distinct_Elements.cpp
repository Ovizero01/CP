//https://codeforces.com/contest/2160/problem/B
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n; cin >> n;
    vector <ll> a(n + 1);
    for(ll i = 1; i <= n; i++) cin >> a[i];

    vector <ll> ans(n + 1);
    ll num = 1;
    ans[1] = num;
    for(ll i = 2; i <= n; i++){
        if(a[i - 1] + i == a[i]){
            num++, ans[i] = num;
        } 
        else ans[i] = ans[i - (a[i] - a[i - 1])];
    }

    for(ll i = 1; i <= n; i++) cout << ans[i] << " ";
    cout << '\n';
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