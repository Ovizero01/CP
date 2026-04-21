//https://www.codechef.com/problems/NOTSUM
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
   ll n; cin >> n;
   vector <ll> a(n + 1);
   for(ll i = 1; i <= n; i++) cin >> a[i];

   bool equal = true;
   ll x, y, z;
   for(ll i = 2; i <= n - 1; i++){
    if(a[i] == 0 && a[i - 1] == 0 && a[i + 1] ==  0) continue;
    else{
        y = i, x = i - 1, z = i + 1;
        equal = false;
        break;
    }
   }

   if(equal){
    cout << -1 << endl;
    return;
   }

   if(a[x] + a[y] != a[z]) cout << x << " " << y << " " << z << endl;
   else if(a[x] + a[z] != a[y]) cout << x << " " << z << " " << y << endl;
   else cout << y << " " << z << " " << x << endl;
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