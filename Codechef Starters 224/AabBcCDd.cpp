//https://www.codechef.com/START224C/problems/AABBCCDD
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int T; cin >> T;
    while(T--){
        int n; cin >> n;
        string s; cin >> s;
        for(auto& x: s) x = tolower(x);
        
        map <char, int> mp;
        for(int i = 0; i < n; i++) mp[s[i]]++;

        vector <int> ans;
        for(auto it : mp)
            ans.push_back(it.second);

        sort(ans.rbegin(), ans.rend());

        if(ans.size() > 1)
            cout << ans[0] + ans[1] << endl;
        else
            cout << ans[0] << endl;
    }
}