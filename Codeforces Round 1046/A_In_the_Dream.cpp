//https://codeforces.com/contest/2136/problem/A
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int a, b, c1, d1; cin >> a >> b >> c1 >> d1;
    int c = c1 - a, d = d1 - b;

    int mn1 = min(a, b), mx1 = max(a, b);
    int mn2 = min(c, d), mx2 = max(c, d);

    if(mn1 >= ceil(mx1 / 2.0) - 1 && mn2 >= ceil(mx2 / 2.0) - 1) cout << "YES\n";
    else cout << "NO\n"; 
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