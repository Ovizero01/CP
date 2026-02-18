//
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n; cin >> n;
    vector <pair<int, int>> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i].first;
    }
    for(int i = 0; i < n; i++){
        cin >> v[i].second;
    }

    ll sum = 0;
    sort(v.begin(), v.end(), [](pair<int,int> &a, pair<int,int> &b){
        return (a.first - a.second) > (b.first - b.second);
    });

    for(int i = 0; i < n-1; i++){
        sum += v[i].first;
    }

    sum += v[n-1].second;

    cout << sum << endl;
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