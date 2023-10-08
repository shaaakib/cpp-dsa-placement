#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define endl '\n'

void solve(){
    string s, t;
    cin >> s >> t;

    for(int i = 0; i + 1 < s.size(); i++){
        if(s[i] == t[i] && s[i + 1] == t[i + 1] && s[i] == '0' && t[i+1] == '1' ){
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
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