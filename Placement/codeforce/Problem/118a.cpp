#include<bits/stdc++.h>
using namespace std;
 
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 bool isVowel(char c){
    return (c == 'a' || c == 'i' || c == 'o' || c == 'u' || c == 'y');
 }

 
int main()
{
    optimize();
 
    string s, ans;
    cin>>s;
    for(auto u : s){
        char c = towlower(u);

        if(isVowel(c) == 0){
            ans += '.';
            ans += c;
        }
    }

    cout<<ans<<endl;
 
}