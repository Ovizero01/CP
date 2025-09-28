//https://codeforces.com/contest/2148/problem/E
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n, k; cin >> n >> k;
    vector <int> a(n);
    map <int, int> mp;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        mp[a[i]]++;
    }

    for(auto it : mp){
        if(it.second % k != 0){
            cout << 0 << '\n';
            return;
        }
    }

    ll ans = 0;
    int l = 0, r = 0;
    map <int, int> mp1;

    while(r < n){
        mp1[a[r]]++;
        while(mp1[a[r]] > mp[a[r]] / k){
            mp1[a[l]]--, l++;
        } 
        ans += r - l + 1;
        r++;
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