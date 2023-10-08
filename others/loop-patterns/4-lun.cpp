#include <bits/stdc++.h>
using namespace std;
int main(){
    char character;
    cin>>character;
    if(character>='a' && character <='z'){
        cout<<"This is lowercase"<<endl;
    }else if(character>='A' && character <= 'Z'){
        cout<<"This is Uppercase"<<endl;
    }else{
        cout<<"This is numeric"<<endl;
    }
    return 0;
}