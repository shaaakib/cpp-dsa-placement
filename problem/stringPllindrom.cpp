/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;


#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main()
{
    optimize();

    int t;
    cin >> t;

    while ( t-- ) {
        string s;
        cin >> s;

        string tmp = s;
        reverse ( tmp.begin(), tmp.end() );


        if ( s == tmp ) cout << "Yes\n";
        else cout << "No\n";
    }
}