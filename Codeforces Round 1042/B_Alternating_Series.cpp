//https://codeforces.com/contest/2131/problem/B
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n; cin >> n;

    if(n & 1){
        for(int i = 1; i <= n; i++){
            if(i & 1) cout << -1 << " ";
            else cout << 3 << " ";
        }
        cout << '\n';
    }
    else{
        for(int i = 1; i < n; i++){
            if(i & 1) cout << -1 << " ";
            else cout << 3 << " ";
        }
        cout << 2 << '\n';
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