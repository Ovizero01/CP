//
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n, m; cin >> n >> m;
    string s; cin >> s;
    set <ll> st;
    for(int i = 0; i < m; i++){
        ll x; cin >> x;
        st.insert(x);
    }

    ll val = 1;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'A') val++, st.insert(val);
        else{
            if(st.find(val) == st.end()) val++;
            while(st.find(val) != st.end()) val++;

            st.insert(val);
            
            if(st.find(val) == st.end()) val++;
            while(st.find(val) != st.end()) val++;
        }
    }

    cout << st.size() << '\n';
    for(ll x : st) cout << x << " ";
    cout << '\n';
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