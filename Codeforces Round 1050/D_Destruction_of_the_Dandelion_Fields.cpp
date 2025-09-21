//https://codeforces.com/contest/2148/problem/D
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n; cin >> n;
    vector <int> a(n), odd;
    for(int &i : a) cin >> i;
    sort(a.rbegin(), a.rend());

    ll ans = 0;
    for(int i = 0; i < n; i++){
        if(a[i] % 2 == 1) odd.push_back(a[i]);
    }

    if(odd.size() == 0){
        cout << 0 << endl;
        return;
    }

    for(int i = 0; i < n; i++){
        if(a[i] % 2 == 0) ans += a[i];
    }

    if(odd.size() % 2 == 0){
        for(int i = 0; i < odd.size() / 2; i++) ans += odd[i];
    }
    else{
        for(int i = 0; i < (odd.size() / 2) + 1; i++) ans += odd[i];
    }

    cout << ans << endl;
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