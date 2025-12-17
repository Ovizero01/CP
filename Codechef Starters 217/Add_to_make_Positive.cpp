//https://www.codechef.com/problems/ADDPOS
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n; cin >> n;
    int ans = 0, sum = 0;
    vector <int> a(n);
    for(int &i: a){
        cin >> i;
        sum += i;
    }

    if(sum < 0){
        ans = sum / n;
        ans = abs(ans);
        if(sum % n != 0) ans += 1;
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