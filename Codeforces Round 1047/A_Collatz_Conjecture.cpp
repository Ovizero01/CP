//https://codeforces.com/contest/2137/problem/A
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int k, x; cin >> k >> x;
    for(int i = 1; i <= k; i++) x *= 2;
    cout << x << '\n';
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