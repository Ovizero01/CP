//https://www.codechef.com/START224C/problems/STREAK
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int T; cin >> T;
    while(T--){
        int n; cin >> n;
        vector <int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        int mx = 0, ans = 0;
        for(int i = 0; i < n; i++){
            if(a[i] > 0){
                ans++;
                mx = max(mx, ans);
            }
            else ans = 0;
        }
        cout << mx << endl;
    }
}