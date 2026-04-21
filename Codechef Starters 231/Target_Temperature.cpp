//https://www.codechef.com/START231C/problems/RESETZ
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
   int n; cin >> n;
   vector <int> a(n);
   for(int i = 0; i < n; i++) cin >> a[i];
   sort(a.begin(), a.end());

   map <int, int> mp;
   for(int i = 0; i < n; i++) mp[a[i]]++;

   bool flag = true;
   for(auto it : mp){
    if(it.second > 1 && it.first != a[n - 1]){
        flag = false;
        break;
    }
   }

   if(flag) cout << "Yes" << endl;
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