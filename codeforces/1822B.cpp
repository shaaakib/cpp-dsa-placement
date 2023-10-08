#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n; 
    cin >> n;
    vector<int>a(n);
    for(auto &x : a) cin >> x;

    int ans = -(int)1e18;

    sort(a.begin(), a.end());

    for(int i = 0; i < n - 1; i++){
        int multi = a[i] * a[i + 1];
        ans = max(ans, multi);
    }
    cout << ans << "\n";
}
int32_t main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}