#include <bits/stdc++.h>
using namespace std;
int main(){
    int t = 1;
    while(1){
        int x, y;
        cin>>x>>y;
        if(x == 0 && y == 0){
            break;
        }

        if(x>y){
            int tmp = x;
            x = y;
            y = tmp;
        }

        cout<<x<<" "<<y<<endl;
    }
    return 0;
}