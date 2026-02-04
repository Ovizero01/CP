//https://www.codechef.com/START224C/problems/ACMDT
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int T; cin >> T;
    while(T--){
        ll b, g, x, y, n;
        cin >> b >> g >> x >> y >> n;

        if(n < x + y){
            cout << -1 << endl;
            continue;
        }
        
        ll rooms = 0;

        rooms = (b + g) / n;
        if((b + g) % n != 0) rooms++;

        ll occupied_b = x * rooms;
        ll occupied_g = y * rooms;
        ll rem_b = b - occupied_b;
        ll rem_g = g - occupied_g;
        
        if(rem_b >= 0 && rem_g >= 0) cout << rooms << endl;
        else cout << -1 << endl;
        
    }
}