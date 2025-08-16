//https://www.codechef.com/problems/SUBDIV
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n; cin >> n;

    if(n & 1) cout << (n + 1) / 2 << '\n';
    else{
        ll ans = n / 2, ans1;
        ans1 = ans + (ans + 1) / 2;
        cout << ans1 << '\n';
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