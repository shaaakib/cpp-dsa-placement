#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define endl '\n'
#define ll long long

void solve(){
    ll n;
    cin >> n;
    ll a[n], b[n];
    ll s1 = 0, s2 = 0;
    for(ll i = 0; i < n; i++){
        cin >> a[i], s1 += a[i];
    }

    for(ll j = 0; j < n; j++){
            cin >> b[j], s2 += b[j];
        }
    
    sort(a, a + n);
    sort(b, b + n);

    ll result = min(s1 + b[0] * n, s2 + a[0] * n);
    cout << result << endl;
    

} 

int main(){
    optimize();

    int t;
    cin>> t;
    while(t--){
        solve();
    }

    return 0;
}