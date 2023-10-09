#include <bits/stdc++.h>

using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define endl '\n'

void solve(){
    int n, m, k;
    cin >> n >> m >> k;

    int x, y;
    cin >> x >> y;

    bool cgt = false;
    for(int i = 0; i < k; i++){
        int a, b;
        cin >> a >> b;

        if((x + y + a + b) % 2 == 0) cgt = true;
    }
    if(cgt) cout << "NO" << endl;
    else cout << "YES\n";
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