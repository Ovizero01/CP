//https://codeforces.com/contest/2149/problem/B
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n; cin >> n;
    vector <int> a(n);
    for(int &i : a) cin >> i;
    sort(a.begin(), a.end());

    int ans = 0;
    for(int i = 0; i < n - 1; i+=2){
        ans = max(ans, a[i + 1] - a[i]);
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