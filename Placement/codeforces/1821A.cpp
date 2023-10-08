#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int ans = 1;

        for(int i = 0; i < s.size(); i++){
            if(s[i] == '?'){
                if(i == 0) ans *= 9;
                else ans *= 10;
            }else if(i == 0 && s[i] == '0') ans = 0;
        }

        cout << ans << endl;
    }
    return 0;
}