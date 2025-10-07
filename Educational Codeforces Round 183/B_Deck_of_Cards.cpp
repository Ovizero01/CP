//https://codeforces.com/contest/2145/problem/B
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n, k; cin >> n >> k; 
    string s; cin >> s;

    if(n == k){
        for(int i = 0; i < n; i++) cout << '-';
        cout << '\n';
        return;
    }

    char arr[n];
    memset(arr, '+', sizeof(arr));

    int i = 0, j = n - 1, two = 0;
    for(int x = 0; x < k; x++){
        if(s[x] == '0') arr[i] = '-', i++;
        else if(s[x] == '1') arr[j] = '-', j--;
        else two++;
    }

    while(i <= j){
        if(two > 0){
           arr[i] = '?', arr[j] = '?', two--;
        } 
        i++, j--;
    }

    for(int i = 0; i < n; i++) cout << arr[i];
    cout << '\n';
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