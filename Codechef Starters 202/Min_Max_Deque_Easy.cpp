//https://www.codechef.com/problems/DEQMNMXEZ
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n, q; cin >> n >> q;
    vector <int> a(n + 1);
    for(int i = 1; i <= n; i++) cin >> a[i];

    deque <int> dq;
    dq.push_back(a[1]);
    for(int i = 2; i <= n; i++){
        if(i % 2 == 1){
            if(dq.front() < dq.back()) dq.push_front(a[i]);
            else dq.push_back(a[i]);
        }
        else{
            if(dq.front() > dq.back()) dq.push_front(a[i]);
            else dq.push_back(a[i]);
        }
    }
   
    cout << min(dq.front(), dq.back()) << '\n';
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