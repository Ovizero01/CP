//https://www.codechef.com/problems/DICEERMAX
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n, s; cin >> n >> s;

    int total = n * 6;
    int six = total - s;

    if(six >= n) cout << total << endl;
    else cout << six * 6 + (n - six) * 5 << endl;
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