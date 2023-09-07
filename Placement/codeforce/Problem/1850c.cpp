#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

void solve(){
    string ans ="";

    for(int i = 0; i<8; i++){
        for(int i = 0; i<8; i++){
            char a; cin>>a;
            if(a=='.') continue;
            ans +=a;
        }
    }
    cout<<ans<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
