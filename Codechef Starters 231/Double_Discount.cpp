//https://www.codechef.com/START231C/problems/DBDISC
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
   int n, k; cin >> n >> k;
   vector<int> a(n), b(n);
   for(int &i : a) cin >> i;
   for(int &i : b) cin >> i;
   vector<pair<int, int>> v;

   for(int i = 0; i < n; i++){
    v.push_back({b[i], a[i]});
   }

   sort(v.begin(), v.end(), [](pair<int,int> a, pair<int,int> b) {
        return a.first > b.first;
    });

    int mx = 0;
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            int mx1 = max(v[i].second, v[j].second);
            int mn = min(v[i].second, v[j].second);
            if(mx1 / 2 > 100) mx1 -= 100;
            else mx1 /= 2;
            if(mx1 + mn <= k) 
                mx = max(mx, v[i].first + v[j].first);
        }
    }

    cout << mx << endl;
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