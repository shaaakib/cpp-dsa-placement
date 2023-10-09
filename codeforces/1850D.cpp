#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define endl '\n'
#define ll long long

void solve(){
    int n, k, i;
    cin >> n >> k;

    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    sort (a.begin(), a.end());

    int cnt = 0, ans = 0;
    for(int i = 0; i < n; i++){
       
        if(a[i] - a[i - 1] > k){
            cnt = 1;
        }else{
            cnt++;
        }
        ans = max(ans, cnt);
    }
    cout << n - ans << endl;
    
}

int main(){
    optimize();

    int t;
    cin >> t;
    while(t--){
        solve();
    }
}