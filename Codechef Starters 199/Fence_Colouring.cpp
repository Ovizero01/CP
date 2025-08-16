//https://www.codechef.com/problems/FENCECOL
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
    
    int mx = INT_MIN, num = -1;
    for(auto it : mp){
        if(it.second > mx) mx = it.second, num = it.first;
    }

    if(num == 1) cout << n - mx << '\n';
    else if(mx == 1) cout << n - 1 << '\n';
    else cout << n - mx + 1 << '\n';
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