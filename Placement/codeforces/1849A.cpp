#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main(){
    optimize();

    int t;
    cin>>t;
    while (t--)
    {
        int b, c, h;
        cin>>b>>c>>h;
        cout<<2*(min(b-1,c+h))+1<<endl;
    }
    



    return 0;
}


