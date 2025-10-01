//https://www.codechef.com/problems/BUYING7
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n, k; cin >> n >> k;
    vector <int> a(n);
    for(int &i : a) cin >> i;
    sort(a.rbegin(), a.rend());

    int sum = 0;
    for(int i = 0; i < k; i++){
        sum += a[i];
    }
    cout << sum << endl;
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