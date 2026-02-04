//
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n; cin >> n;
    string s; cin >> s;
    map <char, int> mp;
    for(int i = 0; i < n; i++){
        mp[s[i]]++;
    }
    bool flag = false;
    for(auto it : mp){
        if(it.second > 1){
            flag = true;
            break;
        }
    }
    if(flag) cout << "Yes\n";
    else cout << "No\n";
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