#include <bits/stdc++.h>
using namespace std;
int main(){
    string word = "hello";
    string s;
    cin>> s;
    int x = 0, y = 0;
    for(int i = 0; i<s.size(); i++){
        if(s[i] == word[x]){
            x++;
            y++;
        }
    }

    if(y== 5){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }


    return 0;
}