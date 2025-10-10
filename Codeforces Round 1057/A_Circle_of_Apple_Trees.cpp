//https://codeforces.com/contest/2153/problem/A
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n; cin >> n;
    vector <int> a(n);
    for(int &i : a) cin >> i;
    sort(a.begin(), a.end());
    int ans = 1;
    for(int i = 1; i < n; i++){
        if(a[i] > a[i - 1]) ans++;
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