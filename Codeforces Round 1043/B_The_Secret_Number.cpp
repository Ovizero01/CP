//https://codeforces.com/contest/2132/problem/B
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n, gun = 1e18; cin >> n;
    map <ll, int> mp;
    for(int i = 1; i <= 18; i++){
        ll output = gun + 1;
        if(n % output == 0){
            mp[n / output]++;
        } 
        gun /= 10;
    }
    
    cout << mp.size() << '\n';
    if(mp.size() > 0){
        for(auto it : mp) cout << it.first << " ";
        cout << '\n';
    }
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