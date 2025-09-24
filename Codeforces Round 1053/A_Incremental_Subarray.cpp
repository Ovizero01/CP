//
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n, m; cin >> n >> m;
    vector <int> a(m);
    for(int i = 0; i < m; i++) cin >> a[i];

    bool flag = true;
    for(int i = 0; i < m - 1; i++){
        if(a[i] >= a[i + 1]){
            flag = false;
            break;
        }
    }

    if(flag) cout << n - a[m - 1] + 1 << '\n';
    else cout << 1 << '\n';
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