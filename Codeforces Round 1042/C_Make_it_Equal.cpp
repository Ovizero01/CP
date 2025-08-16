#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n, k; cin >> n >> k;
    vector <int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
        a[i] %= k;
    }
    multiset <int> ml;
    for(int i = 0; i < n; i++){
        int x; cin >> x; 
        x %= k;
        ml.insert(x);
    }

    bool flag = true;
    for(int i = 0; i < n; i++){
        auto it = ml.find(a[i]);
        if(it == ml.end()){
            a[i] = k - (a[i] % k);
            it = ml.find(a[i]);
            if(it == ml.end()){
                flag = false;
                break;
            }
            else ml.erase(it);
        }
        else ml.erase(it);
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