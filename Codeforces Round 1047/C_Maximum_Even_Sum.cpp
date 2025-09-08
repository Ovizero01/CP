//https://codeforces.com/contest/2137/problem/C
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll a, b; cin >> a >> b;

    ll mxeven = -1;
    if((a + b) % 2 == 0) mxeven = a + b;
    if(b % 2 == 1){
        a *= b, b /= b;
        if((a + b) % 2 == 0) mxeven = max(mxeven, a + b);
    }
    else{
        b /= 2;
        a *= b;
        a += 2;
        if(a % 2 == 0) mxeven = max(mxeven, a);
    }

    cout << mxeven << '\n';
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