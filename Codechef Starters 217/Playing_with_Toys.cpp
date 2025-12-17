//https://www.codechef.com/problems/TOYS
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // int T; cin >> T;
    // while(T--){
    //     solve();
    // }

    int n, m; cin >> n >> m;
    cout << max(0, n - m);
    return 0;
}