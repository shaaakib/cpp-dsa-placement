#include <bits/stdc++.h>

using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define endl '\n'

void solve(){
    int n;
    cin >> n;

    int s, e;
    cin >> s >> e;

    int mx = 0;
    
    for(int i = 0; i < n - 1; i++){
        int x, y;
        cin >> x >> y;
        if(x >= s) mx = max(mx, y);
    }

    if(mx < e) cout << s << endl;
    else cout << -1 << endl;
}

int main(){
    
    optimize();

    int t;
    cin >> t;
    
    while(t--){
        solve();
    }

    return 0;
}