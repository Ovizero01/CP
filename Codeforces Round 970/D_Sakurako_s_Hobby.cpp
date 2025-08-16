#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n, one = 0, zero = 0; cin >> n;
    string s; cin >> s;
    for(int i = 0; i < n; i++){
        s[i] == '0' ? zero++ : one++;
    }

    if((n == 1 || n == 3) && abs(zero - one) == 1) cout << "YES\n";
    else cout << "NO\n";
    if((n == 2 || n == 4) && zero == one) cout << "YES\n";
    else cout << "NO\n";
    
    if(n > 4 && (n % 2 == 1) && abs(zero - one) == 1){
        int flag = 0;
        for(int i = 0; i < n - 1; i++){
            if(s[i] == s[i + 1]) flag++;
        }
        
        if(flag <= 1) cout << "YES\n";
        else cout << "NO\n";
    }
    
    else if(n > 4 && (n % 2 == 0) && one == zero){
        int flag = 0;
        for(int i = 0; i < n - 1; i++){
            if(s[i] == s[i + 1]) flag++;
        }
        
        if(flag <= 1) cout << "YES\n";
        else cout << "NO\n";
    }
    
    else cout << "NO\n";
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