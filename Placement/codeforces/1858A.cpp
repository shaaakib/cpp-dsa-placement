#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n";

int main(){
    int t;
    cin>>t;
    while(t--){
        int a, b, c;
        cin>>a>>b>>c;
        if(c%2){
            if(b>a){
                cout<<"Second"<<endl;
            }else{
                cout<<"First"<<endl;
            }
        }else{
            if(a>b){
                cout<<"First"<<endl;             
            }else{
                cout<<"Second"<<endl;
            }
        }
    }
    return 0;
}