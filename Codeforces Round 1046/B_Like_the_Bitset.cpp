//https://codeforces.com/contest/2136/problem/B
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n, k; cin >> n >> k;
    string s; cin >> s;
    vector <int> a(n);

    int cnt = 0;
    bool flag = true;
    for(int i = 0; i < n; i++){
        if(s[i] == '1'){
            cnt++;
            if(cnt >= k){
                flag = false;
                break;
            }
        }
        else cnt = 0 ;
    }

    int m = n, m1 = 1;
    for(int i = 0; i < n; i++){
        if(s[i] == '1') a[i] = m1, m1++;
        else a[i] = m, m--;
    }

    if(flag){
        cout << "YES" << endl;
        for(int i : a) cout << i << " ";
        cout << endl;
    }
    else cout << "NO" << endl;
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