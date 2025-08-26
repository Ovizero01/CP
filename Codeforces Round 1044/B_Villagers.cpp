//https://codeforces.com/contest/2133/problem/B
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n; cin >> n;
    vector <int> a(n);
    for(int &i : a) cin >> i;
    sort(a.rbegin(), a.rend());

    ll cost = 0;
    for(int i = 0; i < n; i += 2) cost += a[i];

    cout << cost << '\n';
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