//
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int x, y; cin >> x >> y;
    if(y % 2 == 0){
        if((x + y) % 2 == 0)
            cout << "Bob\n";
        else
            cout << "Alice\n";
    }
    else{
        if((x + y) % 2 == 0)
            cout << "Alice\n";
        else
            cout << "Bob\n";
    }
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