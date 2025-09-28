//
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n; cin >> n;
    int neg = 0, zero = 0;
    vector <int> a(n);
    for(int &i : a) cin >> i;

    for(int i = 0; i < n; i++){
        if(a[i] == 0) zero++;
        else if(a[i] < 0) neg++;
    }

    if(neg % 2 == 1) cout << zero + 2 << '\n';
    else cout << zero << '\n';
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