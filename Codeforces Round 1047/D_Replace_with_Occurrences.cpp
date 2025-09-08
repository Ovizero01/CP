//https://codeforces.com/contest/2137/problem/D
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector <int> b(n);
    map <int, int> mp;

    for(int i = 0; i < n; i++){
        cin >> b[i];
        mp[b[i]]++;
    }

    for(auto it : mp){
        if (it.second % it.first != 0) {
            cout << -1 << '\n';
            return;
        }
    }

    map<int, queue<int>> freq;
    int val = 1;
    for(auto it : mp){
        freq[it.first].push(0);
        for(int i = 1; i <= it.second / it.first; i++){
            freq[it.first].push(val);
            val++;
        }
    }

    map <int, int> final;
    for(int i = 0; i < n; i++){
        final[b[i]]++;
        if(b[i] == 1) freq[b[i]].pop();
        else if(final[b[i]] % b[i] == 1) freq[b[i]].pop();
        cout << freq[b[i]].front() << " ";
    }
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; cin >> T;
    while(T--){
        solve();
    }
    return 0;
}
