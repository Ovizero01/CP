#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n; cin >> n;
    vector <int> a(n);
    for(int &i : a) cin >> i;
    int idx = 1, ans = a[0];

    for(int i = 1; i < n; i++){
        if(a[i] > ans) idx = i + 1, ans = a[i];
    }

    cout << idx << '\n';
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