//https://codeforces.com/contest/2148/problem/A
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int x, n; cin >> x >> n;
    if(n % 2 == 1) cout << x << endl;
    else cout << 0 << endl;
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