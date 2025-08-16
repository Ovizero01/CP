#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool square(int n){
    if(n < 0) return false;
    int root = sqrt(n);
    return root * root == n;
}

void solve(){
    int n; cin >> n;
    string s; cin >> s;

    if(!square(n)){
        cout << "No\n";
        return;
    }

    int zero = 0;
    for(char ch : s){
        if(ch == '0') zero++;
    }

    if(sqrt(zero) == sqrt(n) - 2) cout << "Yes\n";
    else cout << "No\n";
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