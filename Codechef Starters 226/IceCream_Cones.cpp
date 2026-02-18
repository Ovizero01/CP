//
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int x, y, n; cin >> x >> y >> n;
    cout << max(0, x - (y * n)) << endl;
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