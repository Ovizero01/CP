//https://www.codechef.com/problems/MAKEAP7
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n; cin >> n;
    vector <ll> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    ll Gcd = 0;
    for(int i = 1; i < n; i++){
        Gcd = __gcd(Gcd, a[i] - a[i - 1]);
    }
    ll ans = 0;
    if(Gcd == 1) ans = (a[n - 1] - a[0]) - (n - 1);
    else{
        for(int i = 1; i < n; i++){
            ans += ((a[i] - a[i - 1]) / Gcd) - 1;
        }
    }
    cout << ans << '\n';   
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