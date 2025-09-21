//https://codeforces.com/contest/2148/problem/B
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n, m, x, y; cin >> n >> m >> x >> y;
    vector <ll> a(n), b(m);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < m; i++) cin >> b[i];

    ll crossing = 0;
    for(int i = 0; i < n; i++){
        if(a[i] < y) crossing++;
    }
    for(int i = 0; i < m; i++){
        if(b[i] < x) crossing++;
    }

    cout << crossing << endl;
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