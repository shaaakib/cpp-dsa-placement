#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

void solve(){
    int n;
    cin >> n;
    vector<pair<string, string>> v (n);

    for(int i = 0; i < n; i++){
        cin >> v[i].first >> v[i].second;
    }

    sort (v.begin(), v.end());
    int Sz = unique (v.begin(), v.end()) - v.begin();
    cout << Sz << endl;

}

int main(){

    optimize();
       
      solve();

    return 0;
}