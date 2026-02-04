//
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n; cin >> n;
    int a[2][200000];
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    for(int j = 0; j < n; j++){
        if(a[0][j] > a[1][j])
            swap(a[0][j], a[1][j]);
    }

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < n; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
  
    int j;
    for(j = 1; j < n; j++){
        if(a[0][j] > a[0][j - 1])
            break;
    }
    j -= 1;

    if(a[0][j] > a[1][j]){
        cout << "No\n";
        return;
    }

    bool flag = true;
    for(int k = j; k < n - 1; k++){
        if(a[1][k] > a[1][k+1]){
            flag = false;
            break;
        }
    }
    if(flag) cout << "Yes\n";
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