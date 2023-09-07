#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, m;
    cin >> n >> m;

    long long s1 = 0, s2 = 0;
    for(int i = 0; i < n; i++) {
        int a;
        cin >> a;
        s1 += a;
    }
    for(int i = 0; i < m; i++) {
        int a;
        cin >> a;
        s2 += a;
    }

    if (s1 == s2) {
        cout << "Draw\n";
    } else if (s1 > s2) {
        cout << "Tsondu\n";
    }else{
        cout << "Tenzing\n";
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}