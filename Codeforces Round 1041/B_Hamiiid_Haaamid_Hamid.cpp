#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, x; cin >> n >> x;
    x--;
    string s; cin >> s;

    int lindx = -1, rindx = -1;
    for(int i = x - 1; i >= 0; i--){
        if(s[i] == '#'){
            lindx = i;
            break;
        }
    }
    for(int i = x + 1; i < n; i++){
        if(s[i] == '#'){
            rindx = i;
            break;
        }
    }

    if((lindx == -1 && rindx == -1) || x == 0 || x == n - 1){
        cout << 1 << '\n';
        return;
    }
    
    if(lindx == -1 && rindx != -1) lindx = x - 1;
    else if(lindx != -1 && rindx == -1) rindx = x + 1;
    else{
        if(lindx + 2 > n - rindx + 1) rindx = x + 1;
        else lindx = x - 1;
    }

    cout << min(lindx + 2, n - rindx + 1) << '\n';
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