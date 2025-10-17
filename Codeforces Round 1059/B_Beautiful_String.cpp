//https://codeforces.com/contest/2162/problem/B
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n; cin >> n;
    string s; cin >> s;
    vector <int> ans;
    for(int i = 0; i < n; i++){
        if(s[i] == '1') ans.push_back(i + 1);
    }
    cout << ans.size() << '\n';
    for(int val : ans) cout << val << " ";
    cout << '\n';
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