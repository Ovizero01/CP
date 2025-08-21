//https://codeforces.com/contest/2132/problem/C1
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n; cin >> n;

    vector <int> ans;
    while(n != 0){
        ans.push_back(n % 3);
        n /= 3;
    }

    ll cost = 0, type1, type2;
    for(int i = 0; i < ans.size(); i++){
        if(ans[i] != 0){
            type1 = 1;
            for(int j = 0; j < i + 1; j++) type1 *= 3;
            type2 = i;
            ll power = 1;
            for(int j = 0; j < i - 1; j++) power *= 3;
            type2 *= power;
        }

        ll cost1 = type1 + type2;
        cost += ans[i] * cost1;
    }

    cout << cost << '\n';
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