#include <bits/stdc++.h>
using namespace std;

int main(){
 int t;
 cin>>t;
 while(t--){
  string card;
  cin>>card;
    if(card == "abc" || card == "acb" || card == "cba" || card =="bac"){
        cout<<"Yes"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

 }
    return 0;
}