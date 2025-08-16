#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n; cin >> n;
    vector <int> a(n), b(n);
    for(int &i : a) cin >> i;
    for(int &i : b) cin >> i;

    if(a[n - 1] != b[n - 1]){
        cout << "NO\n";
        return;
    }

    for(int i = 0; i < n - 1; i++){
        if(a[i] != b[i] && (a[i] ^ a[i + 1]) == b[i]) a[i] = b[i];
    }
    for(int i = n - 2; i >= 0; i--){
        if(a[i] != b[i] && (a[i] ^ a[i + 1]) == b[i]) a[i] = b[i];
    }
    
    bool flag = true;
    for(int i = 0; i < n; i++){
        if(a[i] != b[i]){
            flag = false;
            break;
        }
    }

    if(flag) cout << "YES\n";
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