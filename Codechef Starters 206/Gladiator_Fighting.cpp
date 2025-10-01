//https://www.codechef.com/problems/GLADFIGHT
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n; cin >> n;
    int mn = 0, mx = 0;

    mn = n - 2;

    for(int i = 1; i <= n - 2; i++) mx += i;
    cout << mn << " " << mx << endl;
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