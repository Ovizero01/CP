//https://codeforces.com/contest/2127/problem/A
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n; cin >> n;
    vector <int> a(n);
    map <int, int> mp;
    for(int &i : a){
        cin >> i;
        mp[i]++;
    }

    int pos = 0, zero = 0;
    for(auto it : mp){
        if(it.first > 0) pos++;
        else if(it.first == 0) zero++;
    }

    if((pos == 0 || pos == 1) && zero == 0) cout << "YES\n";
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