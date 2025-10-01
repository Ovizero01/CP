//https://www.codechef.com/problems/PRIMESUM7
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n; cin >> n;
    vector <int> a(n);
    for(int &i : a) cin >> i;

    int ans = 0;
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            int val = a[i] + a[j];
            bool flag = true;

            for(int k = 2; k < val; k++){
                if(val % k == 0){
                    flag = false;
                    break;
                }
            }

            if(flag) ans++;
        }
    }

    cout << ans << '\n';
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