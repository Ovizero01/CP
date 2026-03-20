//https://www.codechef.com/problems/MINDIS6
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n, k; cin >> n >> k;
    vector <ll> a(n);
    map <ll, ll> mp;
    for(ll i = 0; i < n; i++){
        cin >> a[i];
        mp[a[i]]++;
    }

    int N = mp.size();
    vector <ll> store;
    for(auto it : mp){
        if(it.first != a[0]) store.push_back(it.second);
    }
    sort(store.begin(), store.end());

    int ans = store.size();
    for(ll i : store){
        if(i <= k) k -= i, ans--;
    }
    cout << ++ans << endl;
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