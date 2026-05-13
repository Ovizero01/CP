#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n; cin >> n;
    vector <int> a(n + 1);
    map <int, int> mp;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        mp[a[i]]++;
    }

    vector <int> ans;

    if(mp[1] >= 2 && mp[-1] < 2){
        ans.push_back(-1);
        if(mp[-1] == 1) ans.push_back(0);
    }
    else if(mp[-1] >= 2 && mp[1] < 2){
        ans.push_back(1);
        if(mp[1] == 1) ans.push_back(0);
    }
    else if(mp[1] < 2 && mp[-1] < 2){
        if(mp[-1] == mp[1]) ans.push_back(0);
        else if(mp[-1] == 1 && mp[1] == 0) ans.push_back(1);
        else if(mp[1] == 1 && mp[-1] == 0) ans.push_back(-1);
    }
    else{
        ans.push_back(-1);
        ans.push_back(0);
        ans.push_back(1);
    }

    sort(ans.begin(), ans.end());
    for(int i: ans) cout << i << " ";
    cout << "\n";
}
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(nullptr), cout.tie(nullptr);
   int T; cin >> T;
   while(T--){
    solve();
   }
}