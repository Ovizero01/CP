//https://www.codechef.com/START231C/problems/NO25PLS
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
   int n; cin >> n;
   if(n % 2 == 0 && n % 5 == 0) cout << 2 << endl;
   else if(n % 2 == 0 || n % 5 == 0) cout << 0 << endl;
   else cout << 1 << endl;
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