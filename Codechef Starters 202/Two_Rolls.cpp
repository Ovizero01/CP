//https://www.codechef.com/problems/TWOROLL
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int x, y; cin >> x >> y;
    x = 50 - x;
    
    if(x >= 2 * y && x <= 2 * (y + 5)) cout << "Yes\n";
    else cout << "No\n";
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