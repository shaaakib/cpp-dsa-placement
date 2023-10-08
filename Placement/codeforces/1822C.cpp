#include <bits/stdc++.h>
using namespace std;

#define ll long long
 
int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        n -= 3;
        cout << (n * n) + (8 * n) + 17 << endl;
    }
    return 0;
}