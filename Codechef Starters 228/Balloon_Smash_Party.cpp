//https://www.codechef.com/problems/BOP3E
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
   ll n; cin >> n;
   vector <ll> a(n + 1), ans;
   for(ll i = 1; i <= n; i++) cin >> a[i];

   ll sum = 0;

   for(ll i = 1; i <= n; i++){
    if(a[i] < sum) ans.push_back(a[i]);
    else ans.push_back(sum);
    if(a[i] > sum) sum++;
   }

   for(ll i : ans) cout << i << " ";
   cout << endl;
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