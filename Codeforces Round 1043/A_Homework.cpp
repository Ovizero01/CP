//https://codeforces.com/contest/2132/problem/A
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n; cin >> n;
    string ans; cin >> ans;
    int m; cin >> m;
    string b, c; cin >> b >> c;
    string front = "", end = "";

    for(int i = 0; i < m; i++){
        if(c[i] == 'V') front += b[i];
        else end += b[i];
    }

    reverse(front.begin(), front.end());
    cout << front + ans + end << '\n';
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