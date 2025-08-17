//https://codeforces.com/contest/2127/problem/C
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    long long n, k; cin >> n >> k;
    vector <pair<ll, ll>> v(n);
    for(int i = 0; i < n; i++) cin >> v[i].first;
    for(int i = 0; i < n; i++) cin >> v[i].second;
    for(int i = 0; i < n; i++){
        if(v[i].first > v[i].second) swap(v[i].first, v[i].second);
    }

    long long sum = 0;
    for(int i = 0; i < n; i++) sum += v[i].second - v[i].first;
    sort(v.begin(), v.end());
    
    long long mn = LLONG_MAX;
    for(int i = 0; i < n - 1; i++){
        if(v[i].second >= v[i + 1].first){
            cout << sum << '\n';
            return;
        }
        mn = min(mn, v[i + 1].first - v[i].second);
    }

    cout << sum + 2 * mn << '\n';
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