//https://codeforces.com/contest/2131/problem/A
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n; cin >> n;
    vector <int> a(n), b(n);
    for(int &i : a) cin >> i;
    for(int &i : b) cin >> i;

    int it = 1;
    for(int i = 0; i < n; i++){
        if(a[i] > b[i]) it += a[i] - b[i];
    }

    cout << it << '\n';
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
