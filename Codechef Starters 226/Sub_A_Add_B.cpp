//https://www.codechef.com/problems/SUBAADDB
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n, a, b; cin >> n >> a >> b;
    while(true){
        if(n >= a) n -= a - b;
        else break;
    }
    cout << n << endl;
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