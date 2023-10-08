#include <bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin >> n;

        string c;
        cin>>c;

        for(int i = 0; i < n; i++){
            int k = i;
            
            int j = i + 1; 
            for( ; c[j] != c[i]; j++);
            i = j;

            cout<<c[k];
            
            
        }

        cout<<"\n";
    }
    return 0;
}