//https://codeforces.com/contest/2148/problem/C
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n, m; cin >> n >> m;
    vector <pair<int, int>> a(n);
    for(int i = 0; i < n; i++){
        int x, y; cin >> x >> y;
        a[i] = {x, y};
    }

    int pos = 0, ans = 0, flag = 0;
    for(int i = 0; i < n; i++){
        if(a[i].second == pos){
            if((a[i].first - flag) % 2 == 0) ans += a[i].first - flag;
            else ans += (a[i].first - flag) - 1;
        } 
        else{
            if((a[i].first - flag) % 2 == 0) ans += (a[i].first - flag) - 1;
            else ans += a[i].first - flag;
        }
        pos = a[i].second, flag = a[i].first;
    }
    if(flag < m) ans += (m - flag); 

    cout << ans << endl;
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