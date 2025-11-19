//https://www.codechef.com/problems/SEPX
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n, x; cin >> n >> x;
    vector <int> a(n);
    for(int &i : a) cin >> i;
    sort(a.begin(), a.end());

    bool flag = true;
    for(int i = 0; i < n - 1; i++){
        if(a[i] < x && x < a[i + 1]){
            flag = false;
            break;
        }
    }

    if(flag) cout << "Yes\n";
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