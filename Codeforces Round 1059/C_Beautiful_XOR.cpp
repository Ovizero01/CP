//https://codeforces.com/contest/2162/problem/C
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int a, b, i; cin >> a >> b;

    if(a == b){
        cout << 0 << '\n';
        return;
    }
    
    bitset <32> bits2(b);
    vector <int> ans;

    for(int steps = 1; steps <= 100; steps++){
        bitset <32> bits1(a);
        int ans1 = 0;
        for(int i = 0; i < bits1.size(); i++){
            int x = (bits1[i] ^ bits2[i]) * pow(2, i);
            if(ans1 + x > a) break;
            else ans1 += x;
        }
        a ^= ans1;
        ans.push_back(ans1);
        if(a == b){
            cout << steps << '\n';
            for(int val : ans) cout << val << " ";
            cout << '\n'; 
            return;
        }
    }

    cout << -1 << '\n';
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