//https://www.codechef.com/problems/ALLEV
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n; cin >> n;
    int sum = 0;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        sum += x;
    }
    if(sum % 2 == 0) cout << "Yes" << endl;
    else cout << "No" << endl;
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