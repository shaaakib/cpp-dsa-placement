#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, ans = 0, cnt = 0;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){ 
     cin >> v[i];

    if(v[i] == 0) cnt++;
    else cnt = 0;
    
    ans = max(ans, cnt);

    }

    cout << ans << endl;
}

int main(){
    int t;
    cin>> t;
    while(t--){
        solve();
    }
    return 0;
}