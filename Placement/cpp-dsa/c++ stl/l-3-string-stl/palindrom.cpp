#include <bits/stdc++.h>
using namespace std;
int main(){
    string s1 = "aabaa";
    string tmp = s1;

    reverse (s1.begin(), s1.end());
    if(s1 == tmp){
        cout<<"Palindrom"<<endl;
    }else{
        cout<<"Not"<<endl;
    }
    

    return 0;
}