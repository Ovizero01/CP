//https://www.codechef.com/problems/FLOWERBUY
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n; cin >> n;
    if(n % 3 == 0) cout << (n / 3) * 5 << '\n';
    else if(n % 3 == 2) cout << ((n / 3) * 5) + 4 << '\n';
    else{
        int x = (n / 3) - 1;
        int cost  = x * 5;
        cost += (2 * 4);
        cout << cost << '\n';
    }
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