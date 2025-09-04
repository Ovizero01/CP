//https://www.codechef.com/problems/NOREAD
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n; cin >> n;
    vector <int> a(n);
    for(int &i : a) cin >> i;

    bool flag = false;
    int l = -1;
    for(int i = 0; i < n - 1; i++){
        if(a[i] > a[i + 1]){
            flag = true, l = i + 1;
            break;
        }
    }

    if(flag) cout << l << " " << l + 1 << '\n';
    else cout << l << '\n';
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