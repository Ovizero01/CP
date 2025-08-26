//https://codeforces.com/contest/2133/problem/A
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n; cin >> n;
    vector <int> a(n);
    map <int, int> mp;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        mp[a[i]]++;
    }

    bool flag = false;
    for(auto it : mp){
        if(it.second > 1){
            flag = true;
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