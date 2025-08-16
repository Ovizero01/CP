#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int a, b; cin >> a >> b;
    int jog = 0;

    while(b--){
        if(jog > 0) jog -= 2;
        else jog += 2;
    }
    while(a--){
        if(jog > 0) jog -= 1;
        else jog += 1;
    }

    if(jog == 0) cout << "YES\n";
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