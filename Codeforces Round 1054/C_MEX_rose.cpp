//https://codeforces.com/contest/2149/problem/C
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n, k; cin >> n >> k;
    multiset <int> ml;
    vector <int> a(n);
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        a[i] = x;
        ml.insert(x);
    }

    int ans = 0;
    for(int i = 0; i < k; i++){
        if(ml.find(i) == ml.end()){
            ml.insert(i);
            ans++;
        }
    }

    int countk = 0;
    for(int i = 0; i < n; i++){
        if(a[i] == k) countk++;
    }
    countk -= ans;
    if(countk > 0) ans += countk;

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