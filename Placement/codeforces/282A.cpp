#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main(){
    int n, X = 0;
    cin>>n;
    string s;
    for(int i = 1; i<=n; i++){
        cin>>s;
        if(s=="X++" || s=="++X" ){
           X++;
        }else{
           X--;
        }
    }
    cout<<X;
    return 0;
}