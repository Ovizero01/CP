//https://codeforces.com/contest/2137/problem/B
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n, mx = 0; cin >> n;
    
    vector <int> a(n);
    for(int &i : a){
        cin >> i;
        mx = max(mx, i);
    }
    mx++;

    for(int i = 0; i < n; i++) cout << mx - a[i] << " ";
    cout << '\n';
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