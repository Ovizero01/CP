//https://www.codechef.com/problems/EXMLF1
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n; cin >> n;
    vector <int> a(n);
    for(int i = 0; i < n; i++){
        int d, t; cin >> d >> t;
        a[i] = d / t;
    }
    int indx = 1, mx = INT_MIN;
    for(int i = 0; i < n; i++){
        if(a[i] > mx) indx = i + 1, mx = a[i];
    }
    cout << indx << '\n';
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