//https://codeforces.com/contest/2160/problem/A
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n; cin >> n;
    vector <int> a(n);
    for(int &i : a) cin >> i;
    sort(a.begin(), a.end());
    int num = 0;
    for(int i = 0; i < n; i++){
        if(a[i] == num) num++;
    }
    cout << num << '\n';
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