//https://www.codechef.com/problems/SETSK
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
   int n, k; cin >> n >> k;
   vector <int> a(n + 1), ans;
   for(int i = 1; i <= n; i++){
    cin >> a[i];
    if(a[i] == 1) ans.push_back(i);
   } 

   bool flag = true;
   for(int i = 1; i < ans.size(); i++){
    if(ans[i] - ans[i - 1] <= k){
        flag = false;
        break;
    }
   }

   if(!flag){
    cout << "No" << endl;
    return;
   }
   
   for(int i = 1; i <= n; i++){
       if(a[i] == 0){
            flag = false;
            if(!ans.empty()){
                for(int j = 0; j < ans.size(); j++){
                    if(abs(i - ans[j]) <= k){
                       flag = true;
                       break;
                    }    
                }
            }
            else flag = false;
        }
        if(!flag) break;
   }

   if(!flag) cout << "No" << endl;
   else cout << "Yes" << endl;
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