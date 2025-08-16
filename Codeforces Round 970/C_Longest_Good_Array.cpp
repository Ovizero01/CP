#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int l, r; cin >> l >> r;
    int d = r - l;
    int k = (1 + floor(sqrt(1 + 8.0 * d))) / 2;
    cout << k << '\n';
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