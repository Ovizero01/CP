//https://www.codechef.com/problems/MOVHYPE
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n; cin >> n;
    int loc = 2*n - (n - 1);
    vector <int> a(loc);
    for(int &i : a) cin >> i;

    int ans = INT_MAX;
    for(int i = 0; i < loc - 1; i++){
        int val = max(a[i], a[i + 1]);
        ans = min(ans, val);
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