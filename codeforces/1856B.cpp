#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define endl '\n'
#define ll long long

void solve(){
    int n;
    cin >> n;

    vector<int> a(n);

    for(int i = 0; i < n; i++) cin >> a[i];

    ll sum = 0, cnt = 0;
    for(int i = 0; i < n; i++){
        sum += a[i];
        if (a[i] == 1) cnt++;
    }

    if(sum >= cnt + n && n > 1){
        cout << " YES" << endl;
    }else {
        cout << "NO" << endl;
    }

}

int main(){
    optimize();

    int t; 
    cin >> t;
    while(t--){
        solve();
    }

}