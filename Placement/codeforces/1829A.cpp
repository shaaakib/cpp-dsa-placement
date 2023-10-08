#include <bits/stdc++.h>
using namespace std;

void solve(){
    
    string s1 = "codeforces";
    string s2;
    cin>>s2;
    int cnt = 0;

    for(int i = 0; i < 10; i++){
        if(s1[i] != s2[i]) cnt++;
    }

    cout<<cnt<<endl;
    

}
int main (){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}