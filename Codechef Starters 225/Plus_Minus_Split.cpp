//
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n; cin >> n;
    vector <int> a(n);
    map <int, int> mp;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        a[i] = abs(a[i]);
        mp[a[i]]++;
    }

    if(mp.size() == 1) cout << "Yes" << endl;
    else cout << "No" << endl;
    
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