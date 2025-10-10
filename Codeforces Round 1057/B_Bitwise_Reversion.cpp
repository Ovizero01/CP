//https://codeforces.com/contest/2153/problem/B
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int x, y, z; cin >> x >> y >> z;
    int a = x | z;
    int b = x | y;
    int c = y | z;
    
    if((a & b) == x && (b & c) == y && (a & c) == z) cout << "YES\n";
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